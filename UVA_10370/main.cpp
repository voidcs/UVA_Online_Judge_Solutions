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
    int cases;
    cin>>cases;
    
    //Initialize or input i.e. set variable values
    for (int x = 0; x < cases; x++){
        int students;
        cin>>students;
        int* array = new int[students];
        
        for (int i = 0; i < students; i++){
            cin>>array[i];
        }
        
        float average = 0;
        
        for (int i = 0; i < students; i++){
            average += array[i];
        }
        average/=students;
        
        float aboveAverage = 0;
        
        for (int i = 0; i < students; i++){
            if (array[i]>average)
                aboveAverage++;
        }
        
        float ans = aboveAverage/students*100;
        cout<<fixed<<setprecision(3)<<ans<<"%"<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}