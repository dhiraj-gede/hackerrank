#include<iostream>
using namespace std;
int main(){
    int d=0, s, t, a, b, m, n, count1=0, count2=0;
    int sum=0;
    cin>>s>>t;
    cin>>a>>b;
  //  cout<<"enter total number of fruits";
    cin>>n>>m;             //oranges    //apples
    int d1, d2;
  //  cout<<"enter position of tree 'a' &'b' on x-axis \n";
    
  //  cout<<"enter starting pt & ending point of house\n";
   // cout<<"enter distance of fruits falling 'd'\n";
    for(int i=0; i<n; i++)
    {
        //cout<<"\n apple "<<i<<" orange "<<i<<"\n";
        cin>>d1;
        d=a+d1;
        if(a+d1>=s && a+d1<=t){
            count1++;
        }
    }
    for(int i=0; i<m; i++){
        cin>>d2;
         if(b+ d2<=t && b+d2>=s){
            count2++; 
        }
        //cout<<"#"<<d<<"3"<<"\n";
    }
    cout<<count1<<"\n"<<count2;
    return 0;

}