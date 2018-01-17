/*Complex number algebra*/
#include <iostream>
using namespace std;
struct Complex_num{
    float real,imaginary;
};
Complex_num division(Complex_num a,Complex_num b);
Complex_num addition(Complex_num a,Complex_num b);
Complex_num subtraction(Complex_num a,Complex_num b);
Complex_num multiplication(Complex_num a,Complex_num b);
int main(){
int op;
Complex_num a,b,result;
cout<<"Enter the operation to perform: \n1:addition\n2:subtraction\n3:multiplication\n4:Division"<<endl;
cin>>op;
cout<<"Enter two complex numbers with real & imaginary part seperated by tab: "<<endl;
cin>>a.real;
cin>>a.imaginary;
cin>>b.real;
cin>>b.imaginary;
if(op==1){
    result=addition(a,b);
    cout<<"\nResult: "<<result.real<<"+"<<result.imaginary<<"i\n";
}
if(op==2){
    result=subtraction(a,b);
    cout<<"\nResult: "<<result.real<<"+"<<result.imaginary<<"i\n";
}
if(op==3){
    result=multiplication(a,b);
    cout<<"\nResult: "<<result.real<<"+"<<result.imaginary<<"i\n";
}
if(op==4){
    result=division(a,b);
    cout<<"\nResult: "<<result.real<<"+"<<result.imaginary<<"i\n";
}
return 0;
}
Complex_num addition(Complex_num a,Complex_num b){
    Complex_num result;
    result.real=a.real+b.real;
    result.imaginary=a.imaginary+b.imaginary;
    return result;
}
Complex_num subtraction(Complex_num a,Complex_num b){
    Complex_num result;
    result.real=a.real-b.real;
    result.imaginary=a.imaginary-b.imaginary;
    return result;
}
Complex_num multiplication(Complex_num a,Complex_num b){
    Complex_num result;
    result.real=a.real*b.real-a.imaginary*b.imaginary;
    result.imaginary=a.imaginary*b.real+b.imaginary*a.real;
    return result;
}
Complex_num division(Complex_num a,Complex_num b){
    Complex_num result;
    float mod=b.real*b.real+b.imaginary*b.imaginary;
    result.real=(a.real*b.real+a.imaginary*b.imaginary)/mod;
    result.imaginary=(a.imaginary*b.real-b.imaginary*a.real)/mod;
    return result;
}