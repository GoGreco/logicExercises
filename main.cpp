#include <iostream>
#include <string>
using namespace std;

//Sum of the elements in a list
//the parameters are the list of mumbers we shall use, the size of said list
int addList(int arrayOfNumbers[], int arraySize) {
    //defining and initializing a variable to store the sum value
    int sum = 0;
    //the loop to move through the list
    for (int i = 0; i < arraySize; i++) {
        sum += arrayOfNumbers[i];
    }
    return sum;
}

//Factorial of the elements in a list
//the parameters are the list of mumbers we shall use, the size of said list and another list to store the factorials
int listFactorial(int arrayOfNumbers[], int arraySize, int listOfFactorials[]){
    //initializing the factorials list with an actual size;
    factorialList[arraySize]={};

    //defining the loops 
    //the outer loop to move through the list of numbers
    for(int i = 0; i<arraySize; i++){
        //the inner loop will run a number of times equal to the actual number
        for(int n = 1; n<=arrayOfNumbers[i]; n++){
            listOfFactorials [i]*=n;    
        }
        
    }
    return 0;
}

//counting the number of lettters in a word inside a list of words
//the parameters are the list of words we shall use, the size of said list and another list to store the letter count
int letterCounter(string arrayOfWords[], int arraySize, int numberOfLetters[]){
    numberOfLetters[arraySize] = {};

    //the outer loop to move through the list of words
    for (int i = 0; i<arraySize; i++){
        
        int wordSize = arrayOfWords[i].size()+1;
         //the inner loop will run a number of times equal to the size of the word, as defined above
        for(int n = 1; n < wordSize;n++){
            numberOfLetters[i]+=1;
        } 

    }
    return 0;
}


int main(){

    //sum the elements int the array:
    int numberList[10] = {1,2,3,4,5,6,7,8,9,10};
    int listSize = sizeof(numberList)/sizeof(numberList[0]);
    
    cout<< addList(numberList, listSize)<<endl;
    
    //make the factorial of the numbers in the array:
    int factorialsList[listSize]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    listFactorial(numberList, listSize, factorialsList);

    for (int i =0; i<listSize;i++){
        cout<<factorialsList[i]<<' ';
    };
    cout<<endl;
   
    //counting the number of characters in a word inside a list
    string wordList[4]= {"banana", 
                         "morcego", 
                        "alabastro", 
                         "abaixo"}; 

    listSize = sizeof(wordList)/sizeof(wordList[0]);
    
    int numberOfCharacters[listSize]={};
    letterCounter(wordList, listSize, numberOfCharacters);
    for (int i =0; i<listSize;i++){
        cout<<numberOfCharacters[i]<<' ';
    };
    cout<<endl;
    
       

    return 0;
}