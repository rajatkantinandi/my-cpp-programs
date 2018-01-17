/*Series sum of x-x^2/2!+x^3/3!-....*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
    if(i<5){
        for(int j=5-i;j>=1;j--){
            cout<<" ";
        }
        if(i==1) cout<<" ";
        cout<<"*";
        if(i>1){
            for(int j=2;j<=i*2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
    }
    else {
        for(int j=1;j<=i*2+1;j++){
                cout<<"*";
            }
    }
        cout<<"\n";
    }
    return 0;
}