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

int main(){
    int numberList[10] = {1,2,3,4,5,6,7,8,9,10};
    int listSize = sizeof(numberList)/sizeof(numberList[0]);
    cout<< addList(numberList, listSize);

    return 0;
}