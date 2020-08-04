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
bool isPrime(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int input;
    cin>>input;
    //Initialize or input i.e. set variable values
    while(input!=0){
        vector<int>array;
        vector<int>sums;
        int sum = 0;
        int ans = 0;
        for(int i = 2; i < input; i++){
            if (isPrime(i))
                array.push_back(i);
        }
        
        
        
        for(int a = 0; a < array.size(); a++){
            for(int b = 0; b < array.size(); b++){
                if (array[a]+array[b]==input){
                    bool dup = false;
                    
                    for(int i = 0; i < sums.size();i++){
                        if (array[a]*array[b]==sums[i])
                            dup = true;
                    }
                    
                    if (dup==false){
                        ans++;
                        sums.push_back(array[a]*array[b]); 
                    }
                    
                }
            }
        }
        
        cout<<ans<<endl;
        array.clear();
        cin>>input;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}

bool isPrime(int num){
    bool prime = true;
    if (num == 1)
        prime = false;
    else{
        for (int i = 2; i < num; i++){
            if (num%i==0){
                prime = false;
                return prime;
            }
        }
    }
    return prime;
}