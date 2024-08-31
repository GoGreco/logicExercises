#include <iostream>
using namespace std;

//Sum the elements of a list
int addList(int arrayOfNumbers[], int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += arrayOfNumbers[i];
    }
    return sum;
}

//Factorial of the elements in a list

//numberList= list(range(1,11))
//factorialList = []

//for i in numberList:
    //for x in range(1,i):
    //    i*=x;

  //  factorialList.append(i)

//print(numberList)
//print(factorialList)
long listFactorial(int arrayOfNumbers[], int arraySize){
    long factorialList[arraySize]={};
    for(int number; number<arraySize; number++){
        for(int smallerNumber; smallerNumber<number; smallerNumber++){
            number*=
        }
    }

}



int main(){
    int numberList[10] = {1,2,3,4,5,6,7,8,9,10};
    int listSize = sizeof(numberList)/sizeof(numberList[0]);
    cout<< addList(numberList, listSize);

    return 0;
}