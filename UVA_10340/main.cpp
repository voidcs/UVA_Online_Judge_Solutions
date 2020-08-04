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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string str1;
    string str2;
    //Initialize or input i.e. set variable values
    while(cin>>str1>>str2){
        int encoded = 0;
        int index = 0;
        
        for(int i = 0; i < str2.length();i++){
            if(str2[i]==str1[index]){
                encoded++;
                index++;
            }
        }
        
        if (encoded == str1.length()){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}