/*String equality*/
#include <iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter two strings:"<<endl;
    getline(cin,a,'\n');
    getline(cin,b,'\n');
    if(a.compare(b)==0){
        cout<<"\nStrings are equal\n";
    }
    else{
        cout<<"\nStrings are not equal\n";
    }
return 0;
}