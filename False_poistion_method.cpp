#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define el "\n"
#define ld long double
int fact(int n){
    int sum=1;
    for(int j=1;j<=n;j++) sum*=j;
    return sum;
}
long double  funct(long double a){
                        long double ans= (a*a*exp(-a/2))-1;
                        
                          return ans;
            // return (a*a*exp(-a/2))-1;
}
long double deriv(long double b){
    return 3*b*b-8*b;
}
long double funct_false_p_m(long double a,long double b){
    return (a*funct(b)-b*funct(a))/(funct(b)-funct(a));
}
long double newton(long double b){
    return b-funct(b)/deriv(b);
}
long double val_final(long double a,long double b){
              return a-funct(a)*((a-b)/(funct(a)-funct(b)));
}
int main(){
         
         int ans=0;
         long double first=2;
         long double second=0;
         long double x=val_final(first,second);
        //  cout<<fixed;
        //  cout<<setprecision(6)<<x<<el;
        //  cout<<funct(abs(x))<<el;
         int itr=0;
        //  cout<<x<<' '<<el;
         while(abs(funct(x))>0.00001){
              if(funct(x)*funct(first)<0)
              first=x;
              else if(funct(x)*funct(second)<0)
                second=x;
                x=val_final(first,second);
                // cout<<x<<el;
                itr++;
         }
         cout<<itr<<el;
       cout<<fixed;

       cout<<setprecision(6)<<"Root is : "<<x<<' '<<funct(x)<<el<<el<<el;
       
        return 0;
	}
