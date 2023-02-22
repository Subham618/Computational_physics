using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define vpi vector<pair<int,int> 
#define el "\n"
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        double b[100][100]={{1,2,0},{-2,1,2},{1,3,1}};
       
        vector<double> a={1,1,1};
        vector<double> c;
        double old_val=0;
         for(int ex=0;ex<100;ex++){
                c.clear();
        for(int i=0;i<3;i++){
                double sum=0;
                for(int j=0;j<3;j++)
                sum+=b[i][j]*a[j];
                c.push_back(sum);

        }
          for(auto x: c){
               cout<<x<<' ';
        }
        cout<<el;
        double val=max(c[0],max(c[1],c[2]));
        cout<<val<<el;
        cout<<c[0]<<' '<<c[1]<<' '<<c[2]<<el;
        for(int v=0;v<3;v++){
                c[v]=c[v]/val;
        }
       
        for(int ki=0;ki<3;ki++)
        a[ki]=c[ki];
        //   for(auto x: a){
        //        cout<<x<<' ';
        // }
        cout<<el;
        if(abs(val-old_val)<0.001){
                cout<<"eigen_value : "<<val<<el;
                   for(auto x: a){
               cout<<x<<' ';
        }
                
        break;}
        old_val=val;}

        
return 0;}