#include <iostream>
using namespace std;


//This funciton will recieve three matrixes, two for the operation and a third for the result
//check with the number of rows in one is equal to the number of collums in other
int matrixMultiplier(int matrix1[], int matrix2[],int results[]){

    //determine the number of rows and the number of collums of each of the matrixes

    int rows1 = sizeof(matrix1)/sizeof(matrix1[0]);
    int collums1 =  (sizeof(matrix1)/sizeof(matrix1[0][0]))/rows1;

    int rows2 = sizeof(matrix2)/sizeof(matrix2[0]);
    int collums2 =  (sizeof(matrix2)/sizeof(matrix2[0][0]))/rows2;

    if (rows1 != collums2 || rows2!=collums2){
        cout<<"The matrixes cannot be multiplied";
    };
    

    return 0;
}