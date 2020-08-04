#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("output.txt","w",stdout);
    int cases;
    scanf("%d",&cases);
    getchar();
    getchar();
    while(cases--){
        map<string,int> m;
        int totalTrees = 0;
        string tree;
        while(getline(cin,tree)){
            if(tree.compare("")==0)
                break;
            
            m[tree]++;
            totalTrees++;
        }
              
        for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
            cout<<it->first<<" "<<fixed<<setprecision(4)<<(it->second*1.0/totalTrees)*100<<endl;
        }
        if(cases)
            printf("\n");
    }
    
    
    return 0;
}
