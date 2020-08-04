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
    long long int num1;
    long long int num2;
    cin>>num1;
    int cases = 1;
    //Initialize or input i.e. set variable values
    while(num1>0){
        cin>>num2;
        
        long long int change = num1;
        int count = 1;
        
        while(change!=1 && change<=num2){
            if (change%2==0){
                change /= 2;
                if (change<=num2)
                    count++;
            }
            else if (change%2==1){
                change*=3;
                change++;
                if(change<=num2)
                    count++;
            }
            //cout<<change<<endl;
        }
        
        cout<<"Case "<<cases<<": A = "<<num1<<", limit = "<<num2<<", number of"
                " terms = "<<count<<endl;
        
        cases++;
        cin>>num1;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}