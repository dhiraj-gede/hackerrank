#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
long long int a[x],i,n,large, count=0;
//cout << "\nEnter the number of elements : ";
n=x;
//cout << "\nInput the array elements : ";
for(i=0;i<n;++i)
cin >> a[i];

large=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
}
for(int i=0; i<n; i++)
{
    if(a[i]==large){
        count++;
    }
}
cout<<count;
return 0;
}