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
    string str;
    vector<string>words;
    //Initialize or input i.e. set variable values
    while(getline(cin,str)){
        string word = "";
        for(int i = 0; i < str.length();i++){
            
            
            if (str[i]!=' '){
                word += str[i];
            }
            
            else if (str[i]==' '){
                words.push_back(word);
                word = "";
            }
            
            if (i == str.length()-1)
                words.push_back(word);
            
        }
        
        
        for(int i = 0; i < words.size();i++){
            string flip = "";
            for(int x = 0; x < words[i].length(); x++){
                
                flip += words[i][words[i].length()-x-1];
            }
            
            words[i] = flip;
        }
        for(int i = 0; i < words.size();i++){
            cout<<words[i];
            if (i!=words.size()-1)
                cout<<" ";
        }
        cout<<endl;
        words.clear();
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}