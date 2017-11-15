/*Convert name to short form*/
#include <iostream>
#include <string>
using namespace std;
int main() {
string s,out="",last="";
cout<<"Enter your name: \n";
getline(cin,s,'\n');
if(s.length()>0)
{
out.append(s.substr(0,1));//appending first name in short form
out.append(". ");
for(int i=0;i<s.length()-1;i++){
    if(s[i]==' '&&s[i+1]!=' '){
        out.append(s.substr(i+1,1));//appending short name
        out.append(". ");
        last=s.substr(i+1,s.length());//keeping note of last string
    }
}
out=out.substr(0,out.length()-3);//removing short form of last name
out.append(last);//storing full form of last name
}
cout<<"\nOutput string: "<<out<<endl;
return 0;
}