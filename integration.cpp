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
           return a*a;
}
long double deriv(long double b){
    return 3*b*b-8*b;
}
long double newton(long double b){
    return b-funct(b)/deriv(b);
}
int main(){
       
         long double x=0;
         cout<<"Oringinal Answer : ";
         cout<<fixed;

         cout<<setprecision(8)<<double(8)/double (3)<<el;
         for(long double i=0;i<=2;i=i+0.000001)
         { 
             x=x+funct(i)*0.000001;
         }
         
       cout<<fixed;

       cout<<setprecision(10)<<x<<el<<el<<el;
       
        return 0;
	}
