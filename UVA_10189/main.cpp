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
    int row,col;
    int numFields = 0;
    //Initialize or input i.e. set variable values
    while(cin>>row>>col){
        char array[row][col];
        for(int x = 0; x < row; x++){
            for(int y = 0; y < col; y++){
                cin>>array[x][y];
            }     
        }
        
        for(int x = 0; x < row; x++){
            for(int y = 0; y < col; y++){
   
                if (array[x][y]!= '*'){  //Only loops if point is not a bomb
                    int count = 0;          //Keeps track of number of bombs for each point
                    int startX = x-1;       //Starting point of 3x3 for x
  
                    for(int p = 0; p < 3; p++){
                        int startY = y-1;   //Starting point of 3x3 for y
                        for (int i = 0; i < 3; i++){

                            //Checks that the window is moving within the range of the grid
                            if (startX>=0 && startY>=0 && startX<row && startY<col){
                                if (array[startX][startY]=='*'){
                                    count++;
                                }
                            }                
                            startY++; //Moves to next column of 3x3
                        }
                    startX++;         //Moves to next row of 3x3
                    }
                    //End of calculating bombs for this specific point
                    array[x][y] = count + '0'; //Assigns point on grid to number of bombs found
                }
            }
        }
        
        if (row != 0 && col != 0){
            
            if(numFields!=0)
                cout<<endl;
            
            cout<<"Field #"<<numFields+1<<":"<<endl;
            for(int x = 0; x < row; x++){
                for(int y = 0; y < col; y++){
                    cout<<array[x][y];
                }     
                cout<<endl;
            }
            //cout<<endl;
        }
        
        numFields++;
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}