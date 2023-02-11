using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define vpi vector<pair<int,int> 
#define el "\n"
#define N 4
int determinant(int a[100][100],int m){
          if(m==1)
          return a[0][0];
           if(m==2)
          {
            // cout<<"the value of determinant ....."<<el;
            // cout<<pow(1,b+c)*(new_array[0][0]*new_array[1][1]-new_array[0][1]*new_array[1][0])<<el;
            return (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
          }
           
            int  sum=0;
          for(int x=0;x<m;x++){
        int row=0,column=0;a
        int b=0;
        int c=x;
       int new_array[100][100];
          for(int j=0;j<m;j++){
            if(j==b)
            continue;
            for(int k=0;k<m;k++)
           {
             if(k==x)
            continue;
            new_array[row][column]=a[j][k];
            column++;
           }
           column=0;
           row++;
          }
          sum=sum+pow(-1,b+c+2)*a[0][x]*determinant(new_array,row);
          
        //    if(m-1==2)
        //   {
        //     // cout<<"the value of determinant ....."<<el;
        //     // cout<<pow(1,b+c)*(new_array[0][0]*new_array[1][1]-new_array[0][1]*new_array[1][0])<<el;
        //     return (new_array[0][0]*new_array[1][1]-new_array[0][1]*new_array[1][0]);
        //   }

          
          
          }
    //       cout<<"..........the new array...."<<el;
    //               for(int i=0;i<m-1;i++){
    //     for(int j=0;j<m-1;j++)
    //     cout<<new_array[i][j]<<' ';
    //     cout<<el;
    //    }
    //    cout<<".....new array end......"<<el;
        //   if(m-1==2)
        //   {
        //     // cout<<"the value of determinant ....."<<el;
        //     // cout<<pow(1,b+c)*(new_array[0][0]*new_array[1][1]-new_array[0][1]*new_array[1][0])<<el;
        //     return (new_array[0][0]*new_array[1][1]-new_array[0][1]*new_array[1][0]);
        //   }
        // int val=0;
        //   for(int j=0;j<m;j++){
        //     int kci=m-1;

        //   val=val+ pow(-1,j)*a[0][j]*determinant(new_array,m-1);
        //   }
          return sum;
}
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
       int m;
       cin>>m;
       int old_array[100][100];
       for(int i=0;i<m;i++){
        for(int j=0;j<m;j++)
        cin>>old_array[i][j];
       }
    //     for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++)
    //     cout<<old_array[i][j]<<' ';    printing the old array in matrix form
    //     cout<<el;
    //    }
    //    int sum=0;
    //    for(int i=0;i<m;i++){
    //     int k=determinant(old_array,0,i,m,0);
    //    sum=sum+ pow(-1,i+2)*old_array[0][i]*k;
    //    }
    int sum=0;
    sum=determinant(old_array,m);
    cout<<sum<<el;
    //    cout<<sum<<el;
   


return 0;}