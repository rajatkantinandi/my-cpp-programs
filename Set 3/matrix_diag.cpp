#include <iostream>
using namespace std;
int main() {
    float arr[3][3];
    cout<<"Enter the values"<<endl;
    for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
    cin >> arr[j][i];
    }
    }
    float sum_left_diag,sum_right_diag;
    for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
        if(i==j){
        sum_left_diag+=arr[j][i];
        }
        if((2-j)==i){
        sum_right_diag+=arr[j][i];
        }
    }
    }
    cout<<"Sum of left diagonal:" <<sum_left_diag<<"\nSum of right diagonal: "<<sum_right_diag<<"\n";
    return 0;
}