#include<iostream>
using namespace std;
int main(){
    int n;
    long long bign = 0;
    cin>>n;
    long arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){ 
    cin>>arr[arr_i];
 } 
    for(int arr_i = 0; arr_i < n; arr_i++){
    bign = bign + (arr[arr_i]) ; 
} 
cout<<bign; 
return 0; 
}
