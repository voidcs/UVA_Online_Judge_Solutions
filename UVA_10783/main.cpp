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
    int num;
    cin>>num;
    
    int x,y;
    for(int i = 0; i < num; i++){
        int sum = 0;
        cin>>x>>y;
        
        while(x<=y){
            if (x%2==0)
                x++;
            
            sum+=x;
            x+=2;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    //Initialize or input i.e. set variable values

    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}