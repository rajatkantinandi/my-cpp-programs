/*Least common divisor of two numbers other than 1*/
#include <iostream>
using namespace std;
int main() {
    int a,b,result=1;
    cout<<"Enter two numbers: \n";
    cin>>a;
    cin>>b;
    int small=a,big=b;
    if(a>b){
        small=b;
        big=a;
    }
    for(int i=2;i<=small;i++){
        if(a%i==0&&b%i==0){
            result=i;
            break;
        }
    }
    cout<<"The least common divisor is: "<<result<<endl;
    return 0;
}