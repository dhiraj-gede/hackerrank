#include<iostream>
using namespace std;
int main(){
    int x=0,n;
    cin>>n;
    int grade[n],g[n];
    for( int i=0; i<n; i++){
        cin>>grade[i];
        g[i]=grade[i];
    }
    
    for(int i=0; i<n; i++){
        if(grade[i]%5!=0) {
            grade[i]=grade[i]+5;
        }
        x=((grade[i]/5)*5)-g[i];
        if(x<3 && g[i]>37){
          grade[i]=(grade[i]/5)*5;
          cout<<grade[i];
        }

          else{
              grade[i]=g[i];
              cout<<grade[i];
              //continue;
            }
            cout<<"\n";
    }
    return 0;
}