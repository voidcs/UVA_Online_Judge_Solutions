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

    float months;
    float down;
    float loan;
    int size;
    
    cin>>months>>down>>loan>>size;
    //Initialize or input i.e. set variable values
    while(months>=0){
        float value = loan;
        float left = loan;
        float depRate;
        int count = 0;
        int index = 0;
        
        
        float* numMonth = new float[size];
        float* depre = new float[size];
        for(int i = 0; i < size; i++){
            cin>>numMonth[i];
            cin>>depre[i];
        }
        
        float depLower;
        float lower = loan/months;
        
        while(left>=value){
            
            if (count==0){
                value+=down;
                value-=depre[0]*value;
                count++;
                index++;
                //cout<<"BEFORE: "<<value<<endl;
            }
            
            
            if (numMonth[index]==count){
            depRate = depre[index];
            index++;
            }
            
            depLower = value*depRate;
            value-=depLower;
            left-=lower;
            
//            cout<<"Month: "<<count+1<<endl;
//            cout<<"Dep Rate"<<depRate<<endl;
//            cout<<"Value: "<<value<<endl;
//            cout<<"Payments Left: "<<left<<endl;
            
            
            
           count++;
        }
        count--;
        
        if(loan<(down+loan)-((loan+down)*depre[0])){
            cout<<"0 months"<<endl;
        }

        else if (count==1)
                cout<<"1 month"<<endl;
        else 
                cout<<count<<" months"<<endl;
        
        
        cin>>months>>down>>loan>>size;
    }
        
    
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
