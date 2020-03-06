#include<iostream>
using namespace std;
int main() {
    int N, x=0, a=0, b=0, c=0;
    cin >> N;
    int nr[N];
    for (int i=0; i<N; i++){
        cin >> nr[i];
    }
    while (nr[x]<N){
        if (nr[j]>0){
            a++;
        }
        if (nr[j]<0){
            b++;
        }
        else if (nr[j]==0) {
            c++;
        }
        j++;
    }
    cout << (float)a/N << endl << (float)b/N << endl << (float)c/N;
    return 0;
}