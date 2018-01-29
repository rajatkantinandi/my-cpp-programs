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
    float sum_sq_left_diag=0,sum_sq_right_diag=0;
    for(int j=0;j<x;j++){
    for(int i=0;i<x;i++){
        if(i==j){
        sum_sq_left_diag+=arr[j][i]*arr[j][i];
        }
        if((x-1-j)==i){
        sum_sq_right_diag+=arr[j][i]*arr[j][i];
        }
    }
    }
    cout<<"Sum of square of left diagonal:" <<sum_sq_left_diag<<"\nSum of square of right diagonal: "<<sum_sq_right_diag<<"\n";
    return 0;
}