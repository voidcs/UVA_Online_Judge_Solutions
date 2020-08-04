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
    int size;

    //Initialize or input i.e. set variable values
    while (cin >> size){
        int count = 0;
        vector<int> array;
        for(int i = 0; i < size; i++){
            int temp;
            cin>>temp;
            array.push_back(temp);
        }
        
        for(int x = 0; x < size; x++){
            for(int y = 0; y < size-1; y++){
                if (array[y]>array[y+1]){
                    int temp = array[y];
                    array[y] = array[y+1];
                    array[y+1]=temp;
                    count++;
                }
            }
        }
        
//        for(int i = 0; i < array.size(); i++){
//            cout<<array[i]<<" ";
//        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}