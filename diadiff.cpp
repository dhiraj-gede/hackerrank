#include<iostream>
using namespace std;
int main ()
{
    int m, n, i, j, A[10][10];
    int sum1=0, sum2=0,diff=0;
    //cout << "Enter the number of rows and columns of the matrix : ";
    cin >> m;
    n=m;
    //cout << "Enter the array elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
   
    
   // cout << "The sum ofdiagonal elements : \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j){
                sum1+= A[i][j];
            }                  
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i+j==n-1){
                sum2+= A[i][j];
            }                  
        }
    }
    diff=sum1-sum2;
    if(diff<=0)
    {
        diff=diff*(-1);
    }
    cout<<diff;
   
    return 0;
}