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
    int num;
    int count = 1;
    cin>>num;
    int* array = new int;
    for(int i = 0; i < num; i++){
        
        for(int x = 0; x < 3; x++){
            cin>>array[x];
        }
        
        sort(array,array+3);
        
        cout<<"Case "<<count<<": "<<array[1]<<endl;
        count++;
        
        
    }
    //Initialize or input i.e. set variable values

    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}