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
    while(cases!=0){
        int x;
        int y;
        
        int inx;
        int iny;
        cin>>x>>y;
        
        //cout<<x<<endl<<y<<endl;
        for(int m = 0; m < cases; m++){
            cin>>inx>>iny;
            
            //cout<<x<<y<<endl;
            
            if (inx==x or iny==y)
                cout<<"divisa"<<endl;
            
            else if (inx<x && iny>y)
                cout<<"NO"<<endl;
            else if (inx>x && iny>y)
                cout<<"NE"<<endl;
            else if (inx<x && iny<y)
                cout<<"SO"<<endl;
            else if (inx>x && iny<y)
                cout<<"SE"<<endl;
            
        }
        cin>>cases;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}