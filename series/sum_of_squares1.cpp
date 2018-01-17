/*Series sum of square of odd numbers upto n*/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the last term: \n";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        sum+=i*i;
    }
    cout<<"Result of the series= "<<sum<<endl;
    return 0;
}