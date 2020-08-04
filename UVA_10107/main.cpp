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
    long long int input;
    vector <long long int> array;
    //Initialize or input i.e. set variable values
    while(cin>>input){
        array.push_back(input);
        sort(array.begin(), array.end());
        int index;
        long long int ans;
        if(array.size()%2==1){
            index = (array.size()-1)/2;
            ans = array[index];
        }
        
        else if(array.size()%2==0){
            index = array.size()/2;
            ans = (array[index] + array[index-1])/2;
        }
//        for(int i = 0; i < array.size();i++){
//            cout<<array[i]<<" ";
//        }
//        cout<<endl;
        cout<<ans<<endl;
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}