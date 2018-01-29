/*Print upper & lower triangle of a matrix*/
#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter size of the square matrix: \n";
    cin>>x;
    float arr[x][x];
    cout<<"Enter the values"<<endl;
    for(int j=0;j<x;j++){
    for(int i=0;i<x;i++){
    cin >> arr[j][i];
    }
    }
    cout<<"\nUpper triangle:\n";
    for(int j=0;j<x;j++){
    for(int i=0;i<x;i++){
        if(j<=i){
        cout<<arr[j][i]<<"\t";
        }
        else{
        cout<<"\t";
        }
    }
    cout<<endl;
    }
    cout<<"\nLower triangle:\n";
    for(int j=0;j<x;j++){
    for(int i=0;i<x;i++){
        if(j>=i){
        cout<<arr[j][i]<<"\t";
        }
    }
    cout<<endl;
    }
    return 0;
}