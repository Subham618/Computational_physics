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
        //    return pow(a,3)-7*a*a+a+1;
        return a*a*a-4*a*a+1;
}
int main(){
       long double first=0;
       long double last=1;
    //    long double b=55555.6645678954;
    //    cout<<fixed;
    //    // #include<iomanip> as a library used for the precision
    //    cout<<setprecision(10)<<funct(0.4755620956)<<el;
    //    cout.unsetf (ios::fixed);
    //    cout<<setprecision(10)<<b<<el;
       long double mid= (first+last)/2;
      //    cout<<funct(1.52138)<<"ans approx"<<el;
       int itr=0;
       while(abs(funct(mid))>pow(10,-6)){
        // cout<<mid<<el;
               if(funct(first)*funct(mid)<0)
               last=mid;
               else if(funct(last)*funct(mid)<0)
               first=mid;
               mid=(first+last)/2;
               itr++;
       }
          cout<<"The total number of iteration :"<<itr<<el;
       cout<<fixed;

       cout<<setprecision(10)<<mid<<el<<el<<el;
       cout<<funct(mid)<<" : the value ";
       
        return 0;
	}
