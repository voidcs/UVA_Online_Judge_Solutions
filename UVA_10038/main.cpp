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

    //Initialize or input i.e. set variable values
    int num;

    while (cin>>num){
        int* array = new int[num];
        int* diff = new int [num];
        int* answers = new int [num];
        
        for (int i = 0; i < num; i++){
            cin>>array[i];
        }
        
        
        for (int i = 0; i < num-1; i++){
            int temp = 0;
            temp = array[i] - array[i+1];
            
            if (temp<0)
                temp*=-1;
            
            diff[i] = temp;
            
        }
        
        
        
        for (int i = 0; i < num-1; i++){
            answers[i] = i+1;
        }
        
        sort(answers, answers + (num-1) ,greater<int>());
        sort(diff, diff+(num-1) , greater<int>());

        bool jolly = true;
        for (int i = 0; i < num-1; i++){
            if (diff[i]!=answers[i])
                jolly = false;
        }
        
        if (jolly==true){
            cout<<"Jolly"<<endl;
        }
        else if (jolly==false){
            cout<<"Not jolly"<<endl;
        }

    }
    
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}