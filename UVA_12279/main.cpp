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
    int events;
    cin>>events;
    int casenum = 1;
    //Initialize or input i.e. set variable values
    while (events!=0){
        
        int x = 0;
        int y = 0;
        
        int* array = new int [events];
        
        for(int i = 0; i < events; i++){
            cin>>array[i];
        }
        
        for(int i = 0; i < events; i++){
            if (array[i]==0){
                x++;
            }
            else 
                y++;
        }
        
        cout<<"Case "<<casenum<<": "<<y-x<<endl;
        casenum++;
        cin>>events;
    }
        
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
