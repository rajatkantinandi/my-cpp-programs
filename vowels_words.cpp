/*No of vowels & words in a sentence*/
#include <iostream>
#include <string>
using namespace std;
int main() {
int wordcount=0,vowelcount=0;
string s;
cout<<"Enter the sentence: \n";
getline(cin,s,'\n');
s.find("c");
cout<<"Your Input: \n" <<s<<endl;
if(s.length()>0){
    wordcount++;
for(int i=0;i<s.length()-1;i++){
    if(s[i]==' '&&s[i+1]!=' '){
        wordcount++;
    }
}
}
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        vowelcount++;
    }
}
cout<<"Number of vowels= "<<vowelcount<<"\nAnd number of words= "<<wordcount<<endl;
return 0;
}
