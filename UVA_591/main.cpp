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
    int size;
    int count = 0;
    cin>>size;
    
    //Initialize or input i.e. set variable values
    while(size!=0){
        
        int average = 0;
        int ans = 0;
        int* array = new int[size];
        for(int i = 0; i < size; i++){
            cin>>array[i];
            average+=array[i];
        }
        
        average/=size;
        //cout<<average;
        
        for(int i = 0; i < size;i++){
            
            while(array[i]<average){
                array[i]++;
                ans++;
            }
            
        }
        count++;
        cout<<"Set #"<<count<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
        
        cin>>size;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}