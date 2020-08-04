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
bool isPalindrome(string);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int cases;
    int input;
    
    //Initialize or input i.e. set variable values
    cin>>cases;
    
    for(int x = 0; x < cases; x++){
        cin>>input;
        unsigned long int count = 0;
        unsigned long int ans;
        bool isPalin = false;
        bool out = false;
        while(isPalin==false){
            string str = to_string(input);
            string flip = str;
            
            
            for(int i = 0; i < str.length(); i++){
                flip[i] = str[str.length()-1-i];
            }
            
            unsigned long int add = stoi(flip);
            unsigned long int sum = add+input;
            string test = to_string(sum);
            count++;
   
            if (isPalindrome(test)){
                isPalin = true;
                out = true;
            }           
            
            input = sum;
            ans = sum;
        }
        if(out == true)
            cout<<count<<" "<<ans<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}

bool isPalindrome(string str){
    int len = str.length();

    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len-1-i]){
            return false;
        }
    }
    return true;
}