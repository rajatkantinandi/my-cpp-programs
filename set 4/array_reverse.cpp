/*reverse an array*/
#include <iostream>
using namespace std;
int main()
{
  int arr[10],result[10];
  cout << "Enter the values" << endl;
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < len; i++)
  {
    result[len - i - 1] = arr[i];
  }
  cout << "After modification the final array is:" << endl;
  for (int i = 0; i < len; i++)
  {
    cout << result[i] << ", ";
  }
  cout << "\n";
  return 0;
}