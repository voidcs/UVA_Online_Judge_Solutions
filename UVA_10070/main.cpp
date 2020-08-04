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
    string num;
    
    //Initialize or input i.e. set variable values
    while(cin>>num){
        
        if (num%4==0){
            if(num%100!=0){
                cout<<"This is leap year."<<endl;
            }
            else if (num%400==0){
                cout<<"This is leap year."<<endl;
            }   
        }
        
        if (num%15==0)
            cout<<"This is huluculu festival year."<<endl;
        
        if (num%55==0)
            cout<<"This is bulukulu festival year."<<endl;
        
        if(num%4!=0 && num%15!=0 && num%55!=0)
            cout<<"This is an ordinary year."<<endl;
        cout<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}