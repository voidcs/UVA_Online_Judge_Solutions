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
#include <vector>
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
        int amp;
        int freq;
        cin>>amp>>freq;
        
        for(int f = 0; f < freq; f++){
            
            for(int x = 1; x < amp; x++){
                for(int i = 0; i < x; i++){
                    cout<<x;
                }
                cout<<endl;
            }      
            
            for(int x = amp; x > 0; x--){
                for(int i = 0; i < x; i++){
                    cout<<x;
                }
                cout<<endl;
            }
            
            if (f!=freq-1 || m != cases-1)
                cout<<endl;
        }
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}