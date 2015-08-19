#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

double a,b,c;
const double l=-1e25,r=1e25;

double f(double x)
{
    return a*x*x+b*x+c;
}

double solve(double l,double r)
{
    while (abs(r-l)>1e-15*(abs(l)+abs(r)))
    {
        double t=(l+r)/2;
        if (f(t)*f(l)<0) r=t;
        else l=t;
    }
    return l;
}

//double solve21()
//{
//    double D=b*b-4*a*c;
//    if (b>0) return (-b-sqrt(D))/(2*a);
//    return 2*c/(-b+sqrt(D));
//}
//
//double solve22()
//{
//    double D=b*b-4*a*c;
//    if (b<0) return (-b+sqrt(D))/(2*a);
//    return 2*c/(-b-sqrt(D));
//}
//
//void solve3()
//{
//    double D=b*b-4*a*c;
//    if (b>0)
//    {
//            x1=(-b-sqrt(D))/(2*a);
//            x2=c/(a*x1);
//    }
//    else
//    {
//            x2=(-b+sqrt(D))/(2*a);
//            x1=c/(a*x2);
//    }
//}

int main()
{
//    ifstream input;
//    ofstream output;
//    input.open("input.txt");
//    output.open("output.txt");

    freopen("/home/lionell/Developing/acm/olymp/complex_2015/in.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    cin >> a >> b >> c;
    cout << solve (l,-b/(2*a)) << " " << solve (-b/(2*a), r) << endl;
//    input >> a >> b >> c;
//    output << solve (l,-b/(2*a)) << " " << solve (r, -b/(2*a)) << endl;
//    output << solve21() << " " << solve22() << endl;
//    solve3();
//    output << x1 << " " << x2;

//    input.close();
//    output.close();
    return 0;
}

