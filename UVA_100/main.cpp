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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x,y;
    int answer = 0;
    int num;
    //Initialize or input i.e. set variable values
    while(cin>>x>>y){
        bool flipped = false;
        answer = 0;
        if (x>y){
            int temp;
            temp = x;
            x = y;
            y = temp;  
            flipped = true;
        }
        
        for(int i = x; i <= y; i++){
            int count = 1;
            num = i;
            while(num!=1){
                if (num%2==0){
                    num/=2;
                    count++;
                }
                else if (num%2==1){
                    num*=3;
                    num++;
                    count++;
                }
            }
            if (answer<count)
                answer = count;
        }
        if (flipped == true){
            int temp = x;
            x = y;
            y = temp;
        }
        cout<<x<<" "<<y<<" "<<answer<<endl;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}