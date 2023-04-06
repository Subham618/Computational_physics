using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define db double 
#define vpi vector<pair<int,int> 
#define el "\n"
double func(double x,double y,double z){
        // return x*x*x*exp(-2*x)-2*y;
        return z;
}

double g(double h,double x,double y){
        return -1.0 / 4.0 * pow(M_PI, 2) * (y + 1);
}


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<double > v;
        vector<double > f;
        v.push_back(1);
        double y=1;
        double x=6;
        double y_final=3;
        double x_final=6;

        double y_final=8;
        // ...........z=0 is intial guess change the guess until you get the right answer................
         double z=0;  // put intial guess then find the final value of y at L
            // do this thing until you get the right answers
        double h=0.1;
        while(x<x_final){
        
        
   
        

       double k1 = h * func(x, y, z);
    double l1 = h * g(x, y, z);
    double k2 = h * func(x + h / 2, y + k1 / 2, z + l1 / 2);
    double l2 = h * g(x + h / 2, y + k1 / 2, z + l1 / 2);
    double k3 = h * func(x + h / 2, y + k2 / 2, z + l2 / 2);
    double l3 = h * g(x + h / 2, y + k2 / 2, z + l2 / 2);
    double k4 = h * func(x + h, y + k3, z + l3);
    double l4 = h * g(x + h, y + k3, z + l3);
    double y_new = y + 1.0 / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
    double z_new = z + 1.0 / 6.0 * (l1 + 2 * l2 + 2 * l3 + l4);
    y = y_new;
    z = z_new;
    x += h;
    cout<<"The value"<<el;
    cout<<x<<' '<<y<<' '<<z<<el;
}



              






        
return 0;}