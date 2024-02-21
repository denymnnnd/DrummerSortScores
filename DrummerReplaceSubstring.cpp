#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void replaceSubstring(char *, char *, char*);

int main(){
    //Constants for array lenths
const int numStrings = 3; //number of strings
const int LENGTH = 80; //size of strings

//array for strings
char string1[LENGTH], string2[LENGTH], string3[LENGTH];


char userInput[LENGTH]; //to hold user input
char *strPtr = nullptr; //To point to found 
int idex; //Loop counter


//Get input
cout<< "Enter first input: ";
cin.getline(userInput, LENGTH);
cout << "Enter second input: ";
cin.getline(userInput, LENGTH);
cout <<  "Enter third input: ";
cin.getline(userInput, LENGTH);





}

for (index = 0; index < numStrings; index++)
    {
        strPtr = strstr(string1[index], userInput);
        if ( strPtr != nullptr)
            break;
    }

    if (strPtr != nullptr)
        strncpy(string2, string3);
        cout << string1<< string2;
    else 
        cout << "No matches was found."<<endl;





void replaceSubstring (char* string1, const char* string2, const char* sting3){
    char* found = strstr(string1, string2);
        while (found != nullptr){
            strncpy(found, string3,strlen(string3));
            found = ststr(string1, string2);
        }
        }








strPtr = strstr(string1, string2);
