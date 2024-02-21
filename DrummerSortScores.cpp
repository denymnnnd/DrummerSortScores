//Denymn Drummer

//Dr. R. Knowles

//This program 


#include <iostream>


using namespace std;

int main (){
    
    
    double *testScores, total; //dynamically allocate arrat
    int count; //Array index
    int numberofScores;
    
    //Get number of test scores
    cout << "How many test scores would you like to enter ?";
    cin >> numberofScores ;

}   testScores = new double[numberofScores];// 


void replaceSubstring (char* string1, const char* string2, const char* sting3){
    char* found = strstr(string1, string2);
        while (found != nullptr){
            strncpy(found, string3,strlen(string3));
            found = ststr(string1, string2);