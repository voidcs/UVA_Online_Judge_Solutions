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
    string x, y;
    cin>>x>>y;
    //Initialize or input i.e. set variable values
    while(x!="0" || y!="0"){
        int carry = 0;
        int length1,length;
        length = x.length();
        length1 = y.length();
        
        if (length<length1)
            length = length1;
        
        string swap = "";
        for(int i = 0; i < length; i++){
            swap+='0';
        }
        
        if(x.length()<y.length()){
            for(int i = 0; i < x.length(); i++){
                swap[length-x.length()+i] = x[i];
            }
            x = swap;
        }
        
        if(x.length()>y.length()){
            for(int i = 0; i < y.length(); i++){
                swap[length-y.length()+i] = y[i];
            }
            y = swap;
        }
        
        
        //cout<<length<<endl;
        
        for(int i = 1; i < length+1; i++){
            if ((int)(x[x.length()-i]-48)+(int)(y[y.length()-i]-48)>=10){
            //cout<<(int)(x[i]-48);
                int temp = (int)(x[x.length()-i-1]-48);
                temp += 1;
                x[x.length()-i-1] = temp + '0';
                carry++;
                //cout<<"temp: "<<temp<<endl;
                //cout<<"x: "<<setw(11)<<x<<endl;
                //cout<<"y: "<<setw(11)<<y<<endl;
                //cout<<"Current carryovers: "<<carry<<endl;
            }
            
            
        }
        
        if (carry==0)
            cout<<"No carry operation."<<endl;
        
        else if (carry==1)
            cout<<"1 carry operation."<<endl;
        
        else if (carry>1)
            cout<<carry<<" carry operations."<<endl;
        
        cin>>x>>y;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}