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

    for (int i = 0; i < cases; i++){
        int num;
        cin>>num;
        num*=567;
        num/=9;
        num+=7492;
        num*=235;
        num/=47;
        num-=498;
        //cout<<num<<endl;
        string str = to_string(num);
        char ans = str[str.size()-2];
        cout<<ans<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}