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
    unsigned long int num;
    cin>>num;
    //Initialize or input i.e. set variable values
    cout<<"PERFECTION OUTPUT"<<endl;
    while(num!=0){
        vector<unsigned long int>array;
        
        for(unsigned long int i = 1; i <= num/2; i++){
            if (num%i==0)
                array.push_back(i);
        }
        
        unsigned long int sum = 0;
        
        for(unsigned long int i = 0; i < array.size(); i++){
            sum+=array[i];
        }
        
        if(sum==num)
            cout<<setw(5)<<num<<"  "<<"PERFECT"<<endl;
        
        else if (sum<num)
            cout<<setw(5)<<num<<"  "<<"DEFICIENT"<<endl;
        
        else if (sum>num)
            cout<<setw(5)<<num<<"  "<<"ABUNDANT"<<endl;
        
        array.clear();
        cin>>num;
    }
    cout<<"END OF OUTPUT"<<endl;
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}