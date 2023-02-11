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
long double funct1(long double a){
           return pow(a,3)-7*a*a+a+1;
}

long double funct(long double a,int b){
           return (pow(a,2*b-1)*pow(-1,b+1))/double(fact(2*b-1));
}
int main(){
    long double a=0.25;
        int n=1;
        long double sum=0;
       while(abs(funct(a,n))>pow(10,-6)){
        sum=sum+funct(a,n);
               n++; 
       }
       cout<<fixed;
       cout<<setprecision(8)<<sum<<el<<el<<el;
    
    return 0;
}