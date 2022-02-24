//to multiply matrix column of first matrix must  be equal to rows of second  matrix 
//resultant matrix will be dimension of rows of first * columns of second
#include<iostream>
using namespace std;
int main(){
    int arr1[3][4]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int arr2[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int arr3[3][3];
    

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arr3[i][j]=0;

        }
        
    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<4;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }

    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr3[i][j]<<" ";

        }
        cout<<endl;
    }

    
    

}
/* 
OUTPUT
33 42 51
69 90 111
112 134 156
*/
/* matrix multiplication is order of N^3 */