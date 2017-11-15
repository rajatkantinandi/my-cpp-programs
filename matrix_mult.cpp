/*Matrix Multiplication*/
#include <iostream>
using namespace std;
int main() {
	int mat1_dim[2],mat2_dim[2];
   cout << "Enter the dimension of matrix 1: "<<endl;
   cin >> mat1_dim[0];
	 cin >> mat1_dim[1];
   cout << "Enter the dimension of matrix 2: "<<endl;
   cin >> mat2_dim[0];
	 cin >> mat2_dim[1];
   if(mat1_dim[1]==mat2_dim[0]){
		 //Checking validity of dimensions
	   float A[mat1_dim[0]][mat1_dim[1]],B[mat2_dim[0]][mat2_dim[1]],result[mat1_dim[0]][mat2_dim[1]],sum=0;
		 //Inputs
		 cout<<"Enter Matrix 1: "<<endl;
		 for(int i=0;i<mat1_dim[0];i++){
			 for(int j=0;j<mat1_dim[1];j++){
		 	 cin >> A[i][j];
	 	}
	 }
		 cout<<"Enter Matrix 2: "<<endl;

		 for(int i=0;i<mat2_dim[0];i++){
			 for(int j=0;j<mat2_dim[1];j++){
		 	 cin >> B[i][j];
	 	}
	 }

		 for(int i=0;i<mat1_dim[0];i++){
			 //for rows of resultant matrix which is equal to number of rows of A
			 for(int j=0;j<mat2_dim[1];j++){
				 //for column of resultant matrix which is equal to number of columns of B
				 for(int k=0;k<mat1_dim[1];k++){
					 //for each element Multiplication & addition loop
					 sum+=A[i][k]*B[k][j];
				 }
				 result[i][j]=sum;//storing value after Multiplication & addition
				 sum=0;//restoring sum=0 for next element
			 }
		 }
		 //Displaying result
		 cout << "Result matrix: " << '\n';
		 for(int i=0;i<mat1_dim[0];i++){
			 for(int j=0;j<mat2_dim[1];j++){
				 cout << result[i][j] <<"\t ";
			 }
			 cout << '\n';
		 }
   }
   else{
	   cout<<"Invalid size matrices"<<endl;
   }
   return 0;
}
