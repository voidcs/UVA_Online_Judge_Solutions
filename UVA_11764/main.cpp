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
    cin>>cases;
    //Initialize or input i.e. set variable values
    for(int x = 0; x < cases; x++){
        int high = 0;
        int low = 0;
        
        int size;
        cin>>size;
        int* array = new int[size];
        
        for(int i = 0; i < size; i++){
            cin>>array[i];
        }
        
        for(int i = 0; i < size-1;i++){
            if (array[i]<array[i+1])
                high++;
            if(array[i]>array[i+1])
                low++;
        }
        
        cout<<"Case "<<x+1<<": "<<high<<" "<<low<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}