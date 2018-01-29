#include <iostream>
using namespace std;
int main() {
    float arr[4][4];
    cout<<"Enter the values"<<endl;
    for(int j=0;j<4;j++){
    for(int i=0;i<4;i++){
    cin >> arr[j][i];
    }
    }
    float prod=1;
    for(int j=0;j<4;j++){
    for(int i=0;i<4;i++){
        prod*=arr[j][i];
    }
    }
    cout<<"Product of all numbers: "<<prod<<endl;
    return 0;
}