#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int arr[10];
    cout<<"Enter the 10 integers"<<endl;
    for(int i=0;i<10;i++){
    cin >> arr[i];
    }
    cout<<"Entered array is: "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"\nThe desired result is: "<<endl;
    for(int i=0;i<10;i++){
        cout<<((arr[i]%2==0)?pow(arr[i],3):pow(arr[i],2));
        cout<<", ";
    }
    cout<<"\n ";
    return 0;
}