using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define db double 
#define vpi vector<pair<int,int> 
#define el "\n"
double func(double x,double y){
        // return x*x*x*exp(-2*x)-2*y;
        return (5*x*x-y)/exp(x+y);
}
double func1(double h,double x,double y,double k){
        return h*func(x+h/2,y+k/2);
}
double func2(db h,db x,db y,db k){
         return h*func(x+h,y+k);
}
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<double > v;
        vector<double > f;
        v.push_back(1);
        double y=1;
        for(int i=0;i<10;i++){
        double x=0+0.1*i;
        f.push_back(x);
        
        y=v[i];
        double h=0.1;

        double k1=h*func(x,y);
        double k2=func1(h,x,y,k1);
        double k3=func1(h,x,y,k2);
        double k4=func2(h,x,y,k3);
        db k=(k1+2*k2+2*k3+k4)/6;
        // cout<<k<<' '<<k1<<' '<<k2<<' '<<k3<<' '<<k4<<el;
        db y_org=y+k;
               v.push_back(y_org);
               //the value of y_org at different value of x
       // cout<<"The original value of the y at x at particular value is : = "<<fixed<<setprecision(10)<<y_org<<el;


}
f.push_back(1);
cout<<"NEW VALUE in vector"<<el;
// for(auto x: v)
// cout<<x<<' '<<el;
// for(auto x: f)
// cout<<x<<' '<<el;
for(int i=0;i<11;i++){
        cout<<"The value of x: "<<fixed<<setprecision(2)<<f[i]<<" at y: "<<setprecision(10)<<v[i]<<el;
}

        
return 0;}