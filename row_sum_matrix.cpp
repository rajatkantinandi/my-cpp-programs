/*Row sum of matrix*/
#include <iostream>
using namespace std;
int main() {
  int mat_dim[2];
   cout << "Enter the dimension of matrix: "<< endl;
   cin >> mat_dim[0];
   cin >> mat_dim[1];
   float A[mat_dim[0]][mat_dim[1]],sum=0;
   //Input
   cout << "Enter Matrix : "<< endl;
   for(int i=0;i<mat_dim[0];i++){
     for(int j=0;j<mat_dim[1];j++){
     cin >> A[i][j];
  }
 }
  cout << "Sum of each rows of the matrix: \n";
  for(int i=0;i<mat_dim[0];i++){
    for(int j=0;j<mat_dim[1];j++){
      sum+=A[i][j];
    }
    cout << sum <<"\n";
    sum=0;
  }
   return 0;
}
