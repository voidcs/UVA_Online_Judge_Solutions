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
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num1;
    float num2;
    //Initialize or input i.e. set variable values
    cin>>num1>>num2;
    while(num1!=0 && num2!=0){
        int count = 0;
        for(float i = num1; i < num2+1; i++){
            float test = sqrt(i);
            //cout<<i<<"   "<<test<<endl;
            if (test==floor(test))
                count++;
        }
        
        
        cout<<count<<endl;
        cin>>num1>>num2;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}