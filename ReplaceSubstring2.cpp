#include <iostream>
#include <cstring>
 using namespace std;

char replaceSubstring(char*, char*, char);
 int main(){
    
    const int i = 30; //array lengths
    char *strPtr = nullptr;
    int index;
    int NUMit =1;
    char str1[i];
    char str2[i];
    char str3[i];
    
    
    replaceSubstring(char str1, char str2, char str3);
    
    return 0;
 }


char replaceSubstring(char* str1,char *str2, char* str3){



//Get input
 cout << " Enter first input:"<< endl;
 cin.getline(str1, i);
 cout << "Enter second input:" << endl;
 cin.getline(str2, i);
 cout << "Enter third value:"<< endl;
 cin.getline(str3, i);

 char *strPtr = nullptr;
for (index = 0; index < NUMit; index++){
    strPtr = strstr (str1, str2);
    if (strPtr != nullptr)
    break;
}
if (strPtr != nullptr)
    strcpy (str2, str3);
    
    
else
    cout << "No match found";

return *str2;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
 using namespace std;

int main(){
    
    //const int i = 30; //array lengths
    char *strPtr = nullptr;
    int index;
    int length;
    
    int NUMit =1;
    char str1[] =  " the dog jumped over the fence";
    char str2[] = "the";
    char str3[]= "that";
    
    
    
    //Get input
 //cout << " Enter first input:"<< endl;
 //cin.getline(str1, i);
 //cout << "Enter second input:" << endl;
 //cin.getline(str2, i);
 //cout << "Enter third value:"<< endl;
 //cin.getline(str3, i);
 
 length = strlen(str3);
//if (str1.find(str2,1) != nullptr){
    //strPtr = str1.find(str2,1);
    //strPtr = strstr (str1, str2);
    
for (index = 0; index < NUMit; index++){
    strPtr = strstr (str1, str2);
    if (strPtr != nullptr)
    break;
}  
    //str1.replace(0,3,str3);
    if (strPtr != nullptr){
    strncpy (str1, str3, length);
    
    
    cout <<str1;

}
else
cout << "No match found"<< endl;


    
    
    
    




    
return 0;
}

