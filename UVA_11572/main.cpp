
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        vector<int>v;
        int q;
        scanf("%d",&q);
        int ans = 0;
        for(int i = 0; i < q; i++){
            
            int id;
            scanf("%d",&id);
            
            //if(find(v.begin(),v.end(),id) != v.end() )
            if (v.find(id) != v.end())
                v.clear();
            
            v.push_back(id);
            
            int size = v.size();
            
            ans = max(ans,size);
            //cout<<ans<<endl;
        }
        printf("%d\n",ans);
        v.clear();
        
    }

    return 0;
}
