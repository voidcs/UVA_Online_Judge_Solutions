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
    int numTests;
    
    //Initialize or input i.e. set variable values
    cin>>numTests;
    
    for(int i = 0; i < numTests; i++){
        int size;
        cin>>size;
        int* array = new int[size];
        
        for (int x = 0; x < size; x++){
            cin>>array[x];
        }
        
        int counter = 0;
        
        for(int x = 0; x < size; x++){
            for (int y = 0; y < size-1; y++){
                if (array[y]>array[y+1]){
                    int temp = array[y];
                    array[y] = array[y+1];
                    array[y+1] = temp;
                    counter++;
                }
            }
        }
        
        cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;
        
    }

    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}