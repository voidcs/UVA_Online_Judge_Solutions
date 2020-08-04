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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned long int x,y;
    while(cin>>x>>y){
        if (y<x){
            unsigned long int temp = x;
            x = y;
            y = temp;
            //cout<<"swap"<<endl;
        }
        unsigned long int ans = y-x;
        cout<<ans<<endl;
        x=0;
        y=0;
        
    }
    
    
    //Initialize or input i.e. set variable values

    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}