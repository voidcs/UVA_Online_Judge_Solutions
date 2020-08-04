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
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string str;
    string str1 = "`";
    string str2 = "'";
    int count = 0;
    while (getline(cin,str)){
        
        for (int i = 0; i < str.length();i++){
            if (str[i]=='"'){
                
                if(count%2==0){
                str[i]='`';
                str.insert(i,str1); 
                }
                
                else if(count%2==1){
                str[i]='\'';
                str.insert(i,str2); 
                }
                count++;
                
            }

        }
        
        cout<<str<<endl;
    }
    //Initialize or input i.e. set variable values

    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}