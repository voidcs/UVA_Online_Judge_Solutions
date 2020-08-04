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
    //Declare Variables
    //    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int cases;
    cin>>cases;
    cin.ignore();
    vector<char> letter;
    vector<int> freq;
    
    //Initialize or input i.e. set variable values
    for(int x = 0; x < cases; x++){
        string str;
        
        getline(cin,str);
        //cin.ignore();
        
        for(int i = 0; i < str.length(); i++){
            if (isalpha(str[i])){
                str[i] = toupper(str[i]);
            }
        }

        for(int i = 0; i < str.length(); i++){
            bool entered = false;
            if (isalpha(str[i])){
                
                for(int m = 0; m < letter.size(); m++){
                    if (str[i]==letter[m])
                        entered = true;
                }
                
                
                if (entered == false){
                    letter.push_back(str[i]);
                    freq.push_back(1);
                }
                
                else if (entered == true){
                    int index = 0;
                    for (int m = 0; m < letter.size(); m++){
                        if (str[i]==letter[m])
                            index = m;
                    }
                    freq[index]++;
                }

            }
        }
 
    }
    

    
    pair<int, char> pairt[letter.size()];
    
    for(int i = 0; i < letter.size(); i++){
        pairt[i].first = freq[i];
        pairt[i].second = letter[i];
    }
    
    sort (pairt,pairt+letter.size());
    
    for (int i = 0; i < letter.size(); i++){
        freq[i] = pairt[i].first;
        letter[i]= pairt[i].second;
    }
    
    reverse(letter.begin(),letter.end());
    reverse(freq.begin(),freq.end());

    
    int start;
    int end;
    for(int i = 0; i < freq.size(); i++){
        
        if (freq[i]==freq[i+1]){
            start = i;
            bool found = false;
            for(int x = start; x < freq.size(); x++){
                if (found==false && freq[x]!=freq[x+1]){
                    end = x+1;
                    found = true;
                }
            }
            sort(letter.begin()+start,letter.begin()+end);
        }
        
    }

    for(int i = 0; i < letter.size(); i++){
        cout<<letter[i]<<" "<<freq[i]<<endl;
    }

    
    //Display the headings and the initial values

    //Map inputs -> outputs

    //Display the outputs
    //cout<<"Hello World"<<endl;
    //Exit stage right or left!
    return 0;
}