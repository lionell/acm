#include <cstdio>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using std::vector;
using std::pair;

struct vec3
{
    vec3(){};
    vec3(double rx,double ry,double rz):x(rx),y(ry),z(rz){};
    vec3(const vec3 &src):x(src.x),y(src.y),z(src.z){};
    double x,y,z;
};

vec3 operator+(const vec3 &l,const vec3 &r)
{
    return vec3(l.x+r.x,l.y+r.y,l.z+r.z);
}

vec3 operator-(const vec3 &l,const vec3 &r)
{
    return vec3(l.x-r.x,l.y-r.y,l.z-r.z);
}

vec3 operator*(const vec3 &l,double r)
{
    return vec3(l.x*r,l.y*r,l.z*r);
}

vec3 operator*(double l,const vec3 &r)
{
    return vec3(l*r.x,l*r.y,l*r.z);
}

double operator*(const vec3 &l,const vec3 &r)
{
    return l.x*r.x+l.y*r.y+l.z*r.z;
}

vec3 operator%(const vec3 &l,const vec3 &r)
{
    return vec3(
        l.y*r.z-l.z*r.y,
        l.z*r.x-l.x*r.z,
        l.x*r.y-l.y*r.x
    );
}

vector<vec3> vertices(const vec3 &n,double d)
{
    vector<vec3> ret;
    vec3 v[8];
    double t[8];
    for(int i=0;i<8;++i)
    {
        v[i]=vec3(double((i>>0)&1),double((i>>1)&1),double((i>>2)&1));
        t[i]=n*v[i]+d;
    }
    for(int i=0;i<7;++i)
        for(int j=i+1;j<8;++j)
            if(((i^j)&((i^j)-1))==0) // Manhattan distance is exactly 1.
                if((t[i]<0)^(t[j]<0))
                    ret.push_back((v[j]*t[i]-v[i]*t[j])*(1.0/(t[i]-t[j])));
    return ret;
}

vector<vec3> order(const vector<vec3> &p,const vec3 &n)
{
    vector<vec3> ret;
    int s=p.size();
    vector<pair<double,int> > a;
    double d;
    vec3 v,nx,ny;
    for(int i=0;i<3;++i)
    {
        v=vec3(double(i==0),double(i==1),double(i==2));
        if(i==0||(n%v)*(n%v)>nx*nx) nx=(n%v);
    }
    ny=n%nx;
    nx=nx*(1.0/sqrt(nx*nx));
    ny=ny*(1.0/sqrt(ny*ny));
    v=vec3(0.0,0.0,0.0);
    for(int i=0;i<s;++i) v=v+p[i];
    v=v*(1.0/double(s));
    for(int i=0;i<s;++i)
    {
        d=atan2(ny*(p[i]-v),nx*(p[i]-v));
        a.push_back(pair<double,int>(d,i));
    }
    std::sort(a.begin(),a.end());
    for(int i=0;i<s;++i)
        ret.push_back(p[a[i].second]);
    return ret;
}

double area(const vector<vec3> &p,const vec3 &n)
{
    double ret;
    int s=p.size();
    ret=0.0;
    for(int i=1;i<s-1;++i)
    {
        ret+=(((p[i]-p[0])%(p[i+1]-p[0]))*n)/2.0;
    }
    ret/=sqrt(n*n);
    return ret;
}

std::string file_name = "/home/lionell/Developing/acm/olymp/complex_2015/test/slice.test.20";

int main() {
    freopen(file_name.c_str(), "r", stdin);
    vec3 v[3];
    vec3 n;
    double d;
    for(int i=0;i<3;++i) {
        scanf("%lf%lf%lf",&v[i].x,&v[i].y,&v[i].z);
    }
    fclose(stdin);
    freopen(file_name.c_str(), "a", stdout);
    n=(v[1]-v[0])%(v[2]-v[0]);
    d=-(n*v[0]);
    printf("%.16lf",area(order(vertices(n,d),n),n));
    fclose(stdout);
    return 0;
}
