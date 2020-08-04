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
    int size;
    int farmers;
    
    cin>>size;
    //Initialize or input i.e. set variable values
    
    for(int i = 0; i < size; i++){
        int ans = 0;
        
        cin>>farmers;
        int** array = new int* [farmers];
        
        for(int x = 0; x < farmers; x++){
            array[x] = new int[3];
            cin>>array[x][0]>>array[x][1]>>array[x][2];
            ans += array[x][0]*array[x][2];
            
        }
        
        
        
        
        cout<<ans<<endl;
        
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}