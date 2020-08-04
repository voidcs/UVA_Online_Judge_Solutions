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
    
    int* array = new int[4];
    for(int i = 0; i < 4; i++){
        cin>>array[i];
    }
    
    //Initialize or input i.e. set variable values
    while(array[0]!=0 || array[1]!=0 || array[2]!=0 || array[3]!=0){
        int ans = 1080;
        int num  = 0;
        num = array[0] - array[1];
        if (num < 0)
            num+=40;
        
        ans+= num*360/40;
        
        num = array[2] - array[1];
        if (num < 0)
            num+=40;
        
        ans+=num*360/40;
        
        num = array[2] - array[3];
        if (num<0)
            num+=40;
        
        ans+=num*360/40;
        
        cout<<ans<<endl;
        
        for(int i = 0; i < 4; i++){
            cin>>array[i];
        }
    }
    //Display the headings and the initial values

    //Map inputs -> outputs
    delete [] array;
    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
