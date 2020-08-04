/* 
 * File:   main.cpp
 * Author: James Rungsawang
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <bits/stdc++.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num1,num2;
    char fill;
    //Initialize or input i.e. set variable values
    cin>>num1>>fill>>num2;
    while(num1!=0){

        num1 = (num1*30)+(num2/60*30);
        num2 *= 6;
        
        float ans = abs(num1-num2);
        
        if(ans>180)
            ans = 360-ans;
        
        
        cout<<fixed<<setprecision(3)<<ans<<endl;
        
        cin>>num1>>fill>>num2;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
