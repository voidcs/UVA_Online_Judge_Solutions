/* 
 * File:   main.cpp
 * Author: James Rungsawang
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char array [50] = {'`','1','2','3','4','5','6','7','8','9','0','-','=',
                    'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
                    'A','S','D','F','G','H','J','K','L',';','\'','Z','X',
                    'C','V','B','N','M',',','.','/'};
    
    //Initialize or input i.e. set variable values
    
    string str;
    while(getline(cin,str)){
        for(int i = 0; i < str.length(); i++){
            int index = 0;
            
            if (str[i]!= ' '){
                for(int x = 0; x < strlen(array); x++){
                    if (str[i]== array[x]){
                        index = x;
                        str[i] = array[index-1];
                    }
                }
            }
            
        }
        cout<<str<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}