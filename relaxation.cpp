using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define vpi vector<pair<int,int> 
#define el "\n"
#define db double 
db func(db x){
    return x*x;
}
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        db x0=0;
        db y0=1;
        db x1=1;
        db y1=3;
        db h=0.1;
        int  n=int((x1-x0)/h);
        // cout<<n<<el;
       
        db c[n+1][n+1]={0};
        For(j,n+1){
            For(i,n+1)
           c[j][i]=0;
            
        }
        db d[n+1]={0};
         db Y[n+1]={0};
         Y[0]=y0;
         Y[n]=y1;
        
        d[0]=y0;
        d[n]=y1; 
        for(int i=0;i<n+1;i++)
        cout<<d[i]<<' ';
        cout<<el;

         c[0][0]=x0;
         c[n][n]=x1;
         for(int i=1;i<n;i++){
             c[i][i-1]=-1;
             c[i][i]=2-h*h*func(x0+h*i);
             c[i][i+1]=-1;

            
         }
         //   solve the iteration to find the solution at the n different points for the equations
           db   y[n+1]={0};
         for(int i=0;i<n+1;i++){
               for(int j=0;j<n+1;j++)
               cout<<c[i][j]<<' ';
               cout<<el;
         }
         for(int k=0;k<10;k++){
         for(int i=0;i<n+1;i++){
            double v=d[i];
            for(int j=0;j<n+1;j++){
            if(i==j)
            continue;
            v-=c[i][j]*Y[j];}
            y[i]=v/c[i][i];
         }
         For(x,n+1)
         Y[x]=y[x];
         }

          For(x,n+1)
         cout<<"Y"<<x<<':'<<' '<<"= "<<Y[x]<<el;
        




        
return 0;}