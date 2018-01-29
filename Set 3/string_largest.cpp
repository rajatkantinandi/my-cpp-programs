/*Largest string*/
#include <iostream>
#include <string>
using namespace std;
int main() {
string a,b,c;
cout<<"Enter 3 Strings: \n";
getline(cin,a,'\n');
getline(cin,b,'\n');
getline(cin,c,'\n');
string max="1st",min="3rd";
if(b.length()>a.length()){
    max="2nd";
    if(c.length()>b.length()){
        max="3rd";
        min="1st";
    }
}
else{
if(c.length()>b.length())
{
    min="2nd";
}
if(c.length()>a.length()){
    max="3rd";
}
}
cout<<"The "<<min<<" string is the smallest"<<endl;
cout<<"\nThe "<<max<<" string is the largest"<<endl;
return 0;
}