/*Series sum of e=1+1/1!+1/2!+....*/
#include<iostream>
#include<cmath>
using namespace std;
float factorial(int n);
int main(){
    int n;
    float sum=0;
    cout<<"Enter the number of terms(n): \n";
    cin>>n; 
    cout<<"Result of the series= ";
    for(int i=0;i<=n;i++){
        sum+=1/factorial(i);//calculation
        cout<<"1"<<"/"<<i<<"!"<<((i==n)?"":"+");//display series
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