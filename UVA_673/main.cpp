/* 
 * File:   main.cpp
 * Author: James Rungsawang
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <bits/stdc++.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cases;
    cin>>cases;
    cin.ignore();
    //Display the headings and the initial values
    for(int m = 0; m < cases; m++){
        string str;
        getline(cin,str);
        stack<int> s;
        bool works = true;
        for(int i = 0; i < str.length(); i++){
            if(str[i]=='(')
                s.push(1);
            else if (str[i]=='[')
                s.push(2);
            
            else if (str[i]==')'){      
                if (s.empty()){
                    works = false;
                    break;
                }
                else if (s.top()==1)
                    s.pop();
                
                else{
                    works = false;
                    break;
                }
            }
            else if (str[i]==']'){
                if (s.empty()){
                    works = false;
                    break;
                }
                else if(s.top()==2)
                    s.pop();
                else{
                    works = false;
                    break;
                }
            }
        }
        if (s.empty() && works == true){
            printf("Yes\n");
        }
        else 
            printf("No\n"); 
        
        while(!s.empty()){
            s.pop();
        }
        
    }
    
    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}
