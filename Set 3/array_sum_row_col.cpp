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
    float rowsum[4]={0,0,0,0},colsum[4]={0,0,0,0};
    for(int j=0;j<4;j++){
    for(int i=0;i<4;i++){
        rowsum[j]+=arr[j][i];
        colsum[i]+=arr[j][i];
    }
    }
    cout<<"Sum of the rows are: "<<endl;
    for(int i=0;i<4;i++){
        cout<<rowsum[i]<<", ";
    }
    cout<<"\nSum of the columns are: \n";
    for(int i=0;i<4;i++){
        cout<<colsum[i]<<", ";
    }
    cout<<"\n";
    return 0;
}