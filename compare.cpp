#include<iostream>
using namespace std;

int main(){
    int x[3],y[3];
    int alice, bob;
    alice=0;
    bob=0;
    //cout<<"Enter alex's score: ";
    for(int i=0; i<3; i++){
        cin>>x[i];
    } 
    //cout<<"Enter bob's score: ";
    for(int i=0; i<3; i++){
        cin>>y[i];
    }
    for(int i=0; i<3; i++)
        {
            if(x[i]==y[i])
            {
                continue;
            }
            if(x[i]>y[i])
            {
                
                bob+=1;
               
            }
            if (x[i]<y[i])
            {
                alice= 1+alice;
            }
            
        }
        cout<<bob<<" "<<alice;  
    return 0;
}
