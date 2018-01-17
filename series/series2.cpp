/*Series sum of x-x^2/2!+x^3/3!-....*/
#include<iostream>
#include<cmath>
using namespace std;
float factorial(int n);
int main(){
    int n,x;
    float sum=0;
    cout<<"Enter the number of terms(n): \n";
    cin>>n;
    cout<<"Enter the number(x): \n";
    cin>>x; 
    cout<<"Result of the series= ";
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i+1)*pow(x,i)/factorial(i);//calculation
        cout<<((i%2==0&&i!=1)?"-":"")<<"x^"<<i<<"/"<<i<<"!"<<((i==n||i%2!=0)?"":"+");//display series
    }
   cout<<"= "<<sum<<endl;//display result
    return 0;
}
float factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else if(n>1){
        return n*factorial(n-1);
    }
}