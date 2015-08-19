#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

const double g = 10.0;

inline double SQR(double x) { return x*x; }

struct Point3D {
    double x, y, z;
    Point3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) { }
    Point3D(istream &in) {
        in >> x >> y >> z;
    }
    Point3D(void) : x(-1.0), y(-1.0), z(-1.0) { } ;
};

//Point3D operator - (const Point3D &A, const Point3D &B)
//{
//	return Point3D(A.x - B.x,  A.y - B.y,  A.z - B.z);
//}
//
//Point3D operator + (const Point3D &A, const Point3D &B)
//{
//	return Point3D(A.x + B.x,  A.y + B.y,  A.z + B.z);
//}
//
//Point3D operator * (double k, const Point3D &A)
//{
//	return Point3D(k * A.x,  k * A.y,  k * A.z);
//}

double dist(const Point3D &A, const Point3D &B)
{
    return sqrt(SQR(A.x - B.x) + SQR(A.y - B.y) + SQR(A.z - B.z));
}

double dist_in_horizontal_projection(const Point3D &A, const Point3D &B)
{
    return sqrt(SQR(A.x - B.x) + SQR(A.y - B.y));
}

class get_ev_point
{
private:
    double one_flight_interval;
    double vz_start;
    int num_already_passed_jumps;
public:
    get_ev_point(void) : one_flight_interval(1e300), vz_start(0.0), num_already_passed_jumps(0) { } ;
    get_ev_point(double vz) : num_already_passed_jumps(0), vz_start(vz) {
        one_flight_interval = (2.0*vz)/g;
    }
    double get_curr_ev_point_time(void) {
        return (num_already_passed_jumps+1) * one_flight_interval;
    }
    double get_time_in_curr_jump(double t) const {
        double res = t - one_flight_interval * num_already_passed_jumps;
#ifdef _DEBUG_ERROR
		if(res < -1e-6 || res > one_flight_interval + 1e+6)
			_DEBUG_ERROR("Incorrect argument of get_time_in_curr_jump");
#endif
        return res;
    }
    void step_to_next_ev_point(void) {
        num_already_passed_jumps++;
    }
};

struct all_ball_info
{
    Point3D start, v;
    get_ev_point ep;
    all_ball_info(istream &in)
    {
        start = Point3D(in);
        v = Point3D(in);
        ep = get_ev_point(v.z);
    }
};

Point3D get_by_time(const all_ball_info &b_inf, double t)
{
    double t__ = b_inf.ep.get_time_in_curr_jump(t);
    return Point3D(b_inf.start.x + t * b_inf.v.x, b_inf.start.y + t * b_inf.v.y, b_inf.v.z*t__ - g*SQR(t__)/2);
}

void test_range(double start_time, double finish_time, const all_ball_info &A, const all_ball_info &B, double &min_dist, double &min_dist_by_projection)
{
    double left = start_time, right = finish_time;
    do
    {
        double m1 = (2.0*left + right) / 3.0;
        double m2 = (left + 2.0*right) / 3.0;
        double d1 = dist(get_by_time(A, m1), get_by_time(B, m1));
        double d2 = dist(get_by_time(A, m2), get_by_time(B, m2));
        if(d1 <= d2)
            right = m2;
        else
            left = m1;
    }
    while (right - left > 1e-6);
    double mid = (left + right) / 2.0;
    Point3D A_when_min = get_by_time(A, mid);
    Point3D B_when_min = get_by_time(B, mid);
    min_dist = dist(A_when_min, B_when_min);
    min_dist_by_projection = dist_in_horizontal_projection(A_when_min, B_when_min);
}

int main(int argc, char* argv[])
{
//#ifdef _DEBUG
    freopen("/home/lionell/Developing/acm/olymp/complex_2015/in.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
//#endif
    all_ball_info A(cin);
    all_ball_info B(cin);
    double best_known_ans = dist(A.start, B.start);
    if(dist(A.v, B.v) > 1e-6) // otherwise, initial dist is surely the minimal
    {
        double prev_dist_in_projection;
        double curr_dist;
        double curr_dist_in_projection = best_known_ans; // NOW it's correct, because start is synchronous
        double prev_time = 0.0;
        do
        {
            prev_dist_in_projection = curr_dist_in_projection;
            double tA = A.ep.get_curr_ev_point_time();
            double tB = B.ep.get_curr_ev_point_time();
            if(tA <= tB)
            {
                test_range(prev_time, tA, A, B, curr_dist, curr_dist_in_projection);
                A.ep.step_to_next_ev_point();
                prev_time = tA;
            }
            else
            {
                test_range(prev_time, tB, A, B, curr_dist, curr_dist_in_projection);
                B.ep.step_to_next_ev_point();
                prev_time = tB;
            }
            if(curr_dist < best_known_ans)
            {
                best_known_ans = curr_dist;
                cerr << "\\";
            }
            else
                cerr << "/";
        }
        while(curr_dist_in_projection < best_known_ans + 1e-6);

    }
    cout.precision(15);
    cout << best_known_ans << endl;
    return 0;
}