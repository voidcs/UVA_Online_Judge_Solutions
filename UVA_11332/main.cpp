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
#include <string>
#include <vector>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    vector<int> array;
    //Initialize or input i.e. set variable values
    cin>>num;
    while(num!=0){
        array.clear();
        string str = to_string(num);
        for(int i = 0; i < str.length();i++){
            int temp = str[i]-'0';
            array.push_back(temp);
        }
        
        int ans = 0;
        
        if (array.size()==1)
            ans = array[0];
        
        while(array.size()!=1){
            int sum = 0;
            for(int i = 0; i < array.size(); i++){
                sum += array[i];
                //cout<<array[i]<<" ";
            }
            array.clear();
            str = to_string(sum);
            
            for(int i = 0; i < str.length(); i++){
                int temp = str[i]-'0';
                array.push_back(temp);
            }
            
            ans = sum;
            
        }
        
        cout<<ans<<endl;
        cin>>num;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}