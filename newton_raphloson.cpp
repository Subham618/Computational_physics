#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define vpi vector<pair<int,int> 
#define el "\n"
int fact(int n){
    int sum=1;
    for(int j=1;j<=n;j++) sum*=j;
    return sum;
}
long double funct(long double a){
           return pow(a,3)-4*a*a+1;
}
// For checking the difference between newton raphson and  secant method
long double  funct2(long double a){
                        long double ans= (a*a*exp(-a/2))-1;
                        
                          return ans;
            // return (a*a*exp(-a/2))-1;
}
long double deriv(long double b){
    return 3*b*b-8*b;
}
long double deriv2(long double b){
    return 2*b*exp(-b/2)-(b*b*exp(-b/2)/2);
    
}
long double newton(long double b){
    return b-funct2(b)/deriv2(b);
}
int main(){
       long double first=2;
       long double last=0;
       long double x=1;
       int itr=0;
       while(abs(funct2(x))>pow(10,-10)){
        
              x=newton(x);
              itr++;
       }
              cout<<"total Number of iteraion "<<itr<<el;
              cout<<funct(x)<<" : this is the approx value"<<el;
       cout<<fixed;

       cout<<setprecision(10)<<x<<el<<el<<el;
       
        return 0;
	}
