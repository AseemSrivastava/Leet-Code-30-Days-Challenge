// With constant space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int>b(a.size());
        b[0] =1;int temp=1;
        for(int i=1;i<a.size();++i)b[i]=a[i-1]*b[i-1];
        for(int i=a.size()-2;i>-1;--i)
        {
            temp=a[i+1]*temp;
            b[i]*=temp;
        }
        return b;
    }
};

static auto fast=[](){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    return 0;
}();

// without constant space

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int>b(a.size()),res(a.size());
        b[0] =1;c[a.size()-1]=1;
        for(int i=1;i<a.size();++i)b[i]=a[i-1]*b[i-1];
        for(int i=a.size()-2;i>-1;--i)c[i]=a[i+1]*c[i+1];
        for(int i=0;i<a.size();++i)res[i]=b[i]*c[i];
        return res;
    }
};

static auto fast=[](){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    return 0;
}();
