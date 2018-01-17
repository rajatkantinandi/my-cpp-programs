#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout<<"Enter the 10 integers"<<endl;
    for(int i=0;i<10;i++){
    cin >> arr[i];
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the 10 numbers is: "<<sum<<endl;
    return 0;
}