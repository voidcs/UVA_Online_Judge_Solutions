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
    int cases;
    int bal = 0;
    cin>>cases;
    //Initialize or input i.e. set variable values
    for(int m = 0; m < cases; m++){
        string str;
        int add;
        cin>>str;
        
        if (str == "report")
            cout<<bal<<endl;
        
        else if (str=="donate"){
            cin>>add;
            bal+=add;
        }
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
