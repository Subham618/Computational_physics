using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define el "\n"
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
         double b[3][3]={{1,1,-1},{1,-2,3},{2,3,1}};
         double c[3][3];
          For(j,3){
            For(i,3)
            if(i==j)         // creating a lower tringular matrix 
                            // follow the same method .....LINK https://www.youtube.com/watch?v=m3EojSAgIao&t=321s&ab_channel=Mathispower4u
            c[j][i]=1;
            else 
            c[j][i]=0;
          }
          
         for(int j=1;j<3;j++){
            for(int k=j;k<3;k++){
                double val=b[k][j-1]/b[j-1][j-1];
                c[k][j-1]=val;
                for(int v=0;v<3;v++){                 // FIRST CONVERT MATRIX INTO UPPER TRINGULAR MATRIX 
                   b[k][v]-=val*b[j-1][v];           // BY SAME METHOD WE ALSO FORM A LOWERL TRINGULAR MATRIX SIMILAR TO PROCESS GIVEN IN LINK
                }
            }
         }
         For(j,3){
            For(i,3)
            cout<<c[j][i]<<' ';
            cout<<el;

         }            // PRINTING BOTH MATRIX 
         cout<<el;
         For(j,3){
            For(i,3)
            cout<<b[j][i]<<' ';
            cout<<el;

         }
         cout<<el;

         double w[3][1]={{4},{-6},{7}};

         double y[3][1]={0};
         double x[3][1]={0};
         for(int j=0;j<3;j++){
            double ans=w[j][0];
            for(int k=0;k<j;k++)
            {
                ans=ans-c[j][k]*y[k][0];  // FINDING THE ROOTS OF FIRST MATRIX USING METHOD 
                                            // SIMILAR TO RECURSION 
            }
            y[j][0]=ans;
         }
          for(int j=0;j<3;j++)
         cout<<y[j][0]<<' ';
         cout<<el;
         
           for(int j=2;j>=0;j--){
            double ans=y[j][0];                     // SAME APPROACH AS PREVIOUS ONE
            for(int k=2;k>j;k--)                    // FINDING THE ROOTS OF FIRST MATRIX USING METHOD 
                                                  // SIMILAR TO RECURSION 
            {
                ans-=x[k][0]*b[j][k];
                
            }
            x[j][0]=ans/b[j][j];
         }
        cout<<el<<"FINAL ANS....... OF THE GIVEN MATRIX BY LU DECOMPOSITON METHOD"<<el;
         for(int j=0;j<3;j++)
         cout<<x[j][0]<<' ';
         cout<<el;                            // PRINTING THE FINAL ANS 
         cout<<el<<el;
        

return 0;}


// IF YOU WANT TO CALCULATE FOR 4*4 MATRIX THE JUST CHANGE I J TO 4 INCREASE THE ROW SIZE OF W,X,Y BY ONE 
// ANS ALL OTHERS PROCESS REMAINS THE SAME 
// :) CREATED BY SK-26-01