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
    float H, U, D, F;
    cin>>H;
    //Initialize or input i.e. set variable values
    while (H!=0){
        cin>>U>>D>>F;
        
        float progress = 0;
        int days = 0;
        float sub = U*(F/100);
        //cout<<sub<<endl;
        
        while(progress>=0 and progress<=H){
            progress+=U;
            if(progress<=H)
                progress-=D;
            if(U>0)
                U-=sub;
            days++;
            //cout<<"U is: "<<U<<endl;
            //cout<<"Progress is at "<<progress<<endl;
        }
        
        if (progress<0)
            cout<<"failure on day "<<days<<endl;
        
        else if (progress>H)
            cout<<"success on day "<<days<<endl;
        
        //cout<<"Progress"<<progress<<endl;
        
        
        cin>>H;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}