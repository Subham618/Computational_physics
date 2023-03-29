using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define db double 
#define vpi vector<pair<int,int> 
#define el "\n"
double func(db x,db y){
       return x+y+x*y;
}
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        double x0=0;
        // double y0=1;
        db y=1;
        db x=0.1;
        db h=0.025;                      // initial value is given and h then you have to process the loop until it equal to the value of x
        while(x0<x){                        // when you get the value then you will terminate form the loop
           y=y+h*func(x0,y);
           cout<<y<<' ';
           x0+=h;

        }
        cout<<el<<"The value of the y at x: "<<x<<" is : "<<y<<el;
        
return 0;}