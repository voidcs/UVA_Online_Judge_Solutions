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
    int cases;
    cin>> cases;
    //Initialize or input i.e. set variable values
    for(int x = 0; x < cases; x++){
        bool fits = true;
        int* array = new int [3];
        
        for(int i = 0; i < 3; i++){
            cin>>array[i];
        }
        
        for(int i = 0; i < 3; i++){
            if (array[i]>20){
                fits = false;
            }
        }
        
        if (fits == true)
            cout<<"Case "<<x+1<<": "<<"good"<<endl;
        
        else if (fits==false)
            cout<<"Case "<<x+1<<": "<<"bad"<<endl;
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}