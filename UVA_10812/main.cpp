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
        long long sum;
        long long diff;
        cin>>sum>>diff;
        
        long long num1,num2;
        
        num2 = (sum - diff)/2;
        num1 = sum - num2;
        
        if (num1<num2){
            long long temp = num1;
            num1 = num2;
            num2 = temp;
        }
            
        bool extra = false;
        if ((num1-num2)!=diff)
            extra = true;

        
        if (num1<0 || num2<0 || extra==true){
            cout<<"impossible"<<endl;
        }
        
        else
            cout<<fixed<<num1<<" "<<num2<<endl;
        

    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}