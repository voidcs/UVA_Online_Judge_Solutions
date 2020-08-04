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
    string str;
    cin>>str;
    int count = 1;
    //Initialize or input i.e. set variable values
    while(str!="#"){
        if (str=="HELLO")
            cout<<"Case "<<count<<": ENGLISH"<<endl;
        
        else if (str=="HOLA")
            cout<<"Case "<<count<<": SPANISH"<<endl;
        
        else if (str=="HALLO")
            cout<<"Case "<<count<<": GERMAN"<<endl;
        
        else if (str=="BONJOUR")
            cout<<"Case "<<count<<": FRENCH"<<endl;
        
        else if (str=="CIAO")
            cout<<"Case "<<count<<": ITALIAN"<<endl;
        
        else if (str=="ZDRAVSTVUJTE")
            cout<<"Case "<<count<<": RUSSIAN"<<endl;
        
        else 
            cout<<"Case "<<count<<": UNKNOWN"<<endl;
        
        count++;
        cin>>str;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}