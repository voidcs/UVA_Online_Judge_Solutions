
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double x,y;
    cin>>x>>y;
    while(x!=0 && y!=0){
        double ans = 1;

        double small = min(x-y,y);
        double denom = 1;
        //cout<<fixed<<small<<endl;
        double temp = x;
        for(int i = 0; i < small; i++){
            ans *= temp;
            temp--;
            //cout<<fixed<<"Ans: "<<ans<<endl;
        }
        //cout<<ans<<endl;
        for(int i = 1; i <= small; i++){
            denom *= i;
        }
        ans/=denom;
        //cout<<fixed<<denom<<endl;
        //cout<<ans<<endl;
        
        cout<<fixed<<setprecision(0)<<x<<" things taken "<<y<<" at a time is "<<ans<<" exactly."<<endl;
        
        cin>>x>>y;
    }
    return 0;
}
