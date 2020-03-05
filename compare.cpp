#include<iostream>
using namespace std;

int main(){
    int x[3],y[3];
    int alice, bob;
    alice=0;                                //assigning initial values to zero
    bob=0;
    //cout<<"Enter alice's triplet: ";
    for(int i=0; i<3; i++){                     //filling up array
        cin>>x[i];
    } 
    //cout<<"Enter bob's triplet: ";
    for(int i=0; i<3; i++){
        cin>>y[i];
    }
    for(int i=0; i<3; i++)
        {
            if(x[i]==y[i])                      
            {
                continue;                           // no change
            }
            if(x[i]>y[i])
            {
                
                bob+=1;                             // bob= 1+bob;
               
            }
            if (x[i]<y[i])
            {
                alice= 1+alice;
            }
            
        }
        cout<<bob<<" "<<alice;  
    return 0;
}
