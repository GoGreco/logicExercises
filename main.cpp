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
    listOfFactorials[arraySize]={};

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
//Multiply two matrixes
int matrixMultiplier(){
    int matrix1[3][2]={{25, 36}, 
                       {87, 98}, 
                       {00, 55}};

    int matrix2[2][3]={{95, 52, 98}, 
                       {87, 56, 02}};

    int resultMatrix[3][3]={{0, 0, 0}, 
                            {0, 0, 0},
                            {0, 0, 0}};

    //defining the number of rows and collums, because I can
    int row1    =  sizeof(matrix1)/sizeof(matrix1[0]);
    int collum1 = (sizeof(matrix1)/sizeof(matrix1[0][0]))/row1;

    int row2    =  sizeof(matrix2)/sizeof(matrix2[0]);
    int collum2 = (sizeof(matrix2)/sizeof(matrix2[0][0]))/row2;

    //for structures to move through the rows, the collums, and the result
    //the rows
    for (int r = 0; r < row1; r++){

        //the collums
        for (int c = 0; c < collum2; c++){

            //the result
            for (int result = 0; result < collum1; result++){
                resultMatrix[r][c] += matrix1[r][result] * matrix2[result][c]; 
            }
        }
    }
    
    cout<<"The original matrixes were: "<<endl;
    //print matrix1 and 2

    cout<<"Matrix1: "<<endl;
    for (int pr = 0; pr < row1; pr++){
        for (int pc = 0; pc<collum1; pc++){
            cout<<matrix1[pr][pc]<<", ";
        }
        cout<<endl;
    }
    cout<<"Matrix2: "<<endl;
    for (int pr = 0; pr < row2; pr++){
        for (int pc = 0; pc<collum2; pc++){
            cout<<matrix2[pr][pc]<<", ";
        }
        cout<<endl;
    }

    cout<<"The results are: "<<endl;
    for (int pr = 0; pr < row1; pr++){
        for (int pc = 0; pc<collum2; pc++){
            cout<<resultMatrix[pr][pc]<<", ";
        }
        cout<<endl;
    }

    return 0; 
}

//list sorting
//i'll use buble sort, because fuck it
int numberListSorting(int numberList[], int listSize) {
    int swapVariable;

    for (int i = 0; i < listSize ; i++) {
        for (int n = 0; n < listSize ; n++) {
            if (numberList[n] > numberList[n + 1]) {
                swapVariable = numberList[n];
                numberList[n] = numberList[n + 1];
                numberList[n + 1] = swapVariable;
            }
        }
    }

    return 0;
}

//In a list, search for a number
int findInList(int numberList[], int listSize,int wanted){
    int wantedIndex;
    int found = 0;
    for (int i = 0; i<listSize; i++){
        if (numberList[i] == wanted){
            found = 1;
            wantedIndex = i;
        }
        else{
            if(found!=1){
                wantedIndex = numberList[i];
            }
        }
    }       
    if(found == 1){
        return wantedIndex;
    }
    else{
        cout<< "What you wanted couldn't be found in here, returning 0"<<endl;
        return 0;
    }
}


//calculate the average in a subgroup
int subAverage(int group[], int groupSize,int innerSize){
    int innerQuantity = groupSize/innerSize;
    int sum[innerQuantity]={0};
   
    for(int i = 0; i < groupSize; i++){
        int subIndex = i/innerSize;
        sum[subIndex] +=group[i];
    }
    cout<<"The average of the subgroup 1 is: "<<sum[0]<<endl;
    cout<<"The average of the subgroup 2 is: "<<sum[1]<<endl;
    
    return 0;
}
    
//inverting Strings
string reverseString(string& word){
    int begining = 0;
    int ending = word.length()-1;
    string buffer;

    while(begining < ending){
        swap(word[begining], word[ending]);
        begining++;
        ending--;
    }

    return word;
}

//tranposed matrix



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
    
    //multiplying matrixes
    matrixMultiplier();

    //Sorting a list
    int numList[20] ={20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int numListSize = sizeof(numList)/sizeof(numList[0]);

    numberListSorting(numList, numListSize);
    
    for (int i = 0; i<numListSize; i++){
        cout<<numList[i]<< " ";
    }
    cout<<endl;

    //find in list
    findInList(numList,numListSize, 89);

    
    int findIndex = findInList(numList, numListSize, 18);
    cout<<"The index is: " << findIndex <<endl<<"The number is: " <<numList[findIndex]<<endl;

    
    //calculate the average in a subgroup
    subAverage(numList, 20, 10);

    //reverse word
    cout<< reverseString(wordList[1])<<endl;


    

    return 0;
}