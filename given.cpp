using namespace std;
#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define f first
#define ll long long
#define s second
#define vpi vector<pair<int,int> 
#define el "\n"
double func(double a,double b,double c,double d,double val){
    return a*val*val*val+b*val*val+c*val+d;
}
double derv(double a,double b,double c,double val){
    return 3*val*val*a+b*2*val+c;
}
double determinant(double a[3][3]){
    double sum=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    return sum;
}
double sum_of_minors(double mat[3][3])
{
    return (
        (mat[2][2] * mat[1][1] - mat[2][1] * mat[1][2])
        + (mat[2][2] * mat[0][0] - mat[2][0] * mat[0][2])
        + (mat[1][1] * mat[0][0] - mat[1][0] * mat[0][1]));
}
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
       double b[3][3]={{1,2,3},{3,4,2},{1,2,4}};
       double fit=atan(b[0][2]/b[0][1]);
     double C=cos(fit);
     double s = sin(fit);
       double c[3][3]={0.0};
       c[0][0]=1;
        c[1][1]=C;
        c[2][2]=C;                 // for creation of rotation matrix 
        c[2][1]=s;
        c[1][2]=-s;
       double d[3][3]={0};
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        d[i][j]=c[j][i];
       }
       double mult[3][3]={0};
       double fin[3][3]={0};                // multiply the rotation_matrix_inverse * matrix * rotation_matrix
       for(int i=0;i<3;i++){                   // two multipicaiton happens directly
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
            mult[i][j] += d[i][k] * b[k][j];
        }
       }
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
            fin[i][j] += mult[i][k] * c[k][j];
        }
       }
      
       double test[3][3]={ { 0, 1, 2 }, { 1, 0, -1 }, { 2, -1, 0 } };
        double w=1;
       double x=-(fin[0][0]+fin[1][1]+fin[2][2]);
       double y= sum_of_minors(fin);
       double z=-determinant(fin);
      cout<<"cofficensts of x^3: = "<<w<<el;
      cout<<"cofficensts of x^2: = "<<x<<el;
      cout<<"cofficensts of x: = "<<y<<el;
      cout<<"constant term: = "<<z<<el;
        // use any method to find the roots of the equations ..................

return 0;}
// created by SK-26-01 :-)