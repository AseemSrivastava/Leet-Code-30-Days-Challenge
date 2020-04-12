class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        if(a.size()==1)return a[0];
        while(true)
        {
            sort(a.begin(),a.end());
            int i=a.size()-1;
            a[i]=a[i]-a[i-1];
            a[i-1]=0;
            sort(a.begin(),a.end());
            if(a[i]==0)return 0;
            else if(a[i]>0 && a[i-1]==0)return a[i];
        }
        return 0;
    }
};

static auto fast=[](){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    return 0;
}();

// This isn't the optimal one
