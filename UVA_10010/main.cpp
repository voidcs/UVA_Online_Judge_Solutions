/* 
 * File:   main.cpp
 * Author: James Rungsawang
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include<bits/stdc++.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void search(char**,int,int,int,int,string,int,int,bool&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //Declare Variables
    int cases;
    cin>>cases;
    
    //Initialize or input i.e. set variable values
    for(int q = 0; q < cases; q++){
        
        int row, col;
        cin>>row>>col;
        char** array = new char* [row];
        
        for(int i = 0; i < row; i++){
            array[i] = new char [col];
        }
        
        for(int x = 0; x < row; x++){
            for (int y = 0; y < col; y++){
                cin>>array[x][y];
                array[x][y] = toupper(array[x][y]);
            }
        }
       
        
        int size;
        cin>>size;
        string words [size];
        
        for(int i = 0; i < size; i++){
            cin>>words[i];
            for(int m = 0; m < words[i].length(); m++){
                words[i][m] = toupper(words[i][m]);
            }
        }
        
        
        for(int p = 0; p < size; p++){
            
            string str = words[p];
            int ansx, ansy;
            bool found = false;
            for(int x = 0; x < row; x++){
                for(int y = 0; y < col; y++){
                    
                    if(str[0]==array[x][y]){
                        //cout<<x<<"   "<<y<<endl;
                        if(found==false){
                            search(array,row,col,x,y,str,0,1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,1,0,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,-1,0,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,0,-1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,1,1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,1,-1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,-1,1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                            }

                            search(array,row,col,x,y,str,-1,-1,found);
                            if (found==true){
                                ansx = x+1;
                                ansy = y+1;
                        }
                    }
                        
                    }       
                }
            }
            
            
            cout<<ansx<<" "<<ansy<<endl;
        }
        if(q!=cases-1)
            cout<<endl;
//        for(int x = 0; x < row; x++){
//            for (int y = 0; y < col; y++){
//                cout<<array[x][y];
//            }
//            cout<<endl;
//        }
//        cout<<words[0];
        
        for(int i = 0; i < row; i++){
            delete[] array[i];
        }
        delete [] array;
       
        
    }
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}


void search(char** array, int row, int col, int x, int y, string str, int decX, int decY, bool &found){
    int count = 0;
    
    //cout<<x<<" "<<y;
    for(int m = 0; m < str.length(); m++){
        if(x>=0 && y>=0 && x < row && y < col){
            if(str[m]==array[x][y])
                count++;

            x+=decY;
            y+=decX;
        }
    }
    if(count==str.length()){
        found=true;
        //cout<<"Correct answer"<<endl;
    }
    //cout<<"The count is: "<<count<<"  "<<endl;
    //cout<<"The length is: "<<str.length()<<endl;
}