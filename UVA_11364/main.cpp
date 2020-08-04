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
    for(int m = 0; m < cases; m++){
        int size;
        cin>>size;
        int* array = new int[size];
        for(int i = 0; i < size; i++){
            cin>>array[i];
        }
        
        int min = array[0];
        int max = 0;
        
        for(int i = 0; i < size; i++){
            if(array[i]>max)
                max = array[i];
        }
        
        for (int i = 0; i < size; i++){
            if (array[i]<min)
                min = array[i];
        }
        
        int ans = (max-min)*2;
        
        cout<<ans<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}