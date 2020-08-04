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
    vector<long long int> stack1;
    vector<long long int> stack2;
    
    //Initialize or input i.e. set variable values
    int size1,size2;
    cin>>size1>>size2;
    //Display the headings and the initial values
    int count = 1;
    while(size1!=0 || size2!=0){
        long long int temp;
        
        for(int i = 0; i < size1; i++){
            cin>>temp;
            stack1.push_back(temp);
        }
        
        for(int i = 0; i < size2; i++){
            cin>>temp;
            stack2.push_back(temp);
        }
        
        sort(stack1.begin(),stack1.end());
        sort(stack2.begin(),stack2.end());
        
        int length = stack1.size();
        if (length>stack2.size())
            length = stack2.size();
        
        int ans = 1;
        int index = 0;
        
        while(stack1[index]==stack2[index]){
            ans++;
            index++;
        }
        
        cout<<"Twin Towers #"<<count<<endl;
        cout<<"Number of Tiles : "<<ans<<endl;
        
        count++;
        cin>>size1>>size2;
        stack1.clear();
        stack2.clear();
        cout<<endl;
    }
    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}