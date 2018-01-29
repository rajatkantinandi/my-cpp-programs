/*Arrang an array by swapping even elements with odd ones using call by reference*/
#include <iostream>
using namespace std;
int rearrange(int * arr,int len);
int main()
{
  int arr[10];
  cout << "Enter the values" << endl;
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  rearrange(arr,len);
  cout << "After modification the final array is:" << endl;
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "\n";
  return 0;
}
int rearrange(int * arr,int len){
  int temp=0;
  if(len>=2){
  for(int i=1;i<(len-1);i+=2){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  }
  return 0;
}