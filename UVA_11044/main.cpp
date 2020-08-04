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
    for(int m = 0; m < cases; m++){
        int row,col;
        cin>>row>>col;
        
        row-=2;
        col-=5;
        
        int num1 = 0;
        int num2 = 1;
        int ans = 0;
        
        int add = 0;
        while(add<row){
            add+=3;
            num1++;
        }
        
        add = 0;
        while(add<col){
            add+=3;
            num2++;
        }
        
        ans = num1*num2;
        
        cout<<ans<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}