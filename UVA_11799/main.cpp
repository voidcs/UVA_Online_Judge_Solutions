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

    //Initialize or input i.e. set variable values
    int cases;
    cin>>cases;
    
    for(int i = 0; i < cases; i++){
        int size;
        cin>>size;
        int* array = new int[size];
        
        for(int x = 0; x < size; x++){
            cin>>array[x];
        }
        
        int max = 0;
        
        for(int x = 0; x < size; x++){
            if(array[x]>max)
                max = array[x];
        }
        cout<<"Case "<<i+1<<": " <<max<<endl;
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}