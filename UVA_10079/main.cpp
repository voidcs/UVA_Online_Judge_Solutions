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
    int input;
    cin>>input;
    //Initialize or input i.e. set variable values
    int inc = 2;
    while(input>=0){
        unsigned long pieces = 2;
        for(int i = 0; i < input-1; i++){
            pieces += i+2;

        }
        
        if (input==0)
            pieces=1;
        if (input==1)
            pieces=2;
        cout<<pieces<<endl;
        cin>>input;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}