#include<iostream>
using namespace std;
int main()
{
long long int a[50],i,n,large,small,summax=0, summin=0;
//cout << "\nEnter the number of elements : ";
cin >> n;
//cout << "\nInput the array elements : ";
for(i=0;i<n;++i)
cin >> a[i];

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

//cout<< "\nThe smallest element is "<< small << endl;
//cout<< "\nThe largest element is "<< large << endl;
for(int i=0; i<n; i++)
{
    summax+= a[i];
    summin+= a[i];
}
summin= summin-large;
summax=summax-small;
cout/*<<"min sum= "*/<<summin/*<<"\n max sum="*/<<" "<< summax;

return 0;
}