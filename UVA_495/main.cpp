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
#include <vector>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    long long int num;
    int ans;

    //Initialize or input i.e. set variable values
    while(cin>>num){
        long long int* array = new long long int[num];
        array[0] = 0;
        array[1] = 1;
        
        if (num==0)
            ans = 0;
        
        else if (num==1)
            ans = 1;
        
        else if (num>=2){
            for(int i = 2; i < num+1; i++){
                array[i] = array[i-2]+array[i-1];
            }
        }
        
//        for(int i = 0; i < num+1; i++){
//            cout<<array[i]<<" ";
//        }
//        cout<<endl;
//        
        cout<<"The Fibonacci number for "<<num<<" is "<<array[num]<<endl;
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}