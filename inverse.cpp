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
        // double b[3][6]={{2,1,1,1,0,0},{1,2,1,0,1,0},{1,1,2,0,0,1}};
                double b[3][6]={{2,3,0,1,0,0},{1,-2,-1,0,1,0},{2,0,-1,0,0,1}};

       
        //  for(int j=0;j<3;j++){
        //     for(int k=0;k<4;k++)
        //     cout<<b[j][k]<<' ';
        //     cout<<endl;

        // }
        cout<<endl;
       
        for(int j=0;j<3;j++){
            double val=b[j][j];
            for(int e=0;e<6;e++)
            b[j][e]/=val;
        //      for(int j=0;j<3;j++){
        //     for(int k=0;k<4;k++)
        //     cout<<b[j][k]<<' ';
        //     cout<<endl;
        // }
        cout<<endl;
            for(int k=0;k<3;k++){
                if(k==j)
                continue;
                double c=b[k][j];
                  for(int e=0;e<6;e++)
                  b[k][e]-=c*b[j][e];
            }
             for(int v=0;v<3;v++){
            for(int k=0;k<6;k++)
            cout<<b[v][k]<<' ';
            cout<<endl;
           
        }}
        
        cout<<endl;
        //    for(int v=1;v<3;v++){
        //     // int val=b[j][j];
        //     for(int k=0;k<3;k++)
        //     {
        //         if(k==v)
        //         continue;
        //         double val=b[k][v];
        //         for(int e=0;e<6;e++)
        //         b[k][e]-=val*b[v][e];
        //     }
           
        // }
            
        
         for(int x=0;x<3;x++){
            for(int k=0;k<6;k++){
                if(k==3)
                cout<<"  :  ";
            cout<<b[x][k]<<' ';}
            cout<<endl;

        }
        cout<<endl;
        

    
return 0;}