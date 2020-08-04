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
    string str1 = "one";
    string str2 = "two";
    string str3 = "three";
    string word;
    
    cin>>cases;
    //Initialize or input i.e. set variable values
    for(int x = 0; x < cases; x++){
        int count = 0;
        int ans;
        cin>>word;
        
        for(int i = 0; i < 3; i++){
            if (word[i] == str1[i])
                count++;
        }
        
        if (count == 2 || count == 3)
            ans = 1;
        
        count = 0;
        
        for (int i = 0; i < 3; i++){
            if(word[i] == str2[i])
                count++;
        }
        
        if (count == 2 || count == 3)
            ans = 2;
        
        count = 0;
        
        for(int i = 0; i < 5; i++){
            if(word[i] == str3[i])
                count++;
        }
        if(count==4 || count == 5)
            ans = 3;
        
        cout<<ans<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}