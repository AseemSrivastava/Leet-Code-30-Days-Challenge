// efficient:- using heap
class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        make_heap(a.begin(),a.end());
        while(a.size()!=0)
        {
            int t1=a.front();
            pop_heap(a.begin(),a.end());
            a.pop_back();
            if(a.size()!=0)
            {
                int t2=a.front();
                pop_heap(a.begin(),a.end());
                a.pop_back();
                if(t1==0)return 0;
                else if(t1>0 && t2==0)return t1;
                else a.push_back(t1-t2);
                make_heap(a.begin(),a.end());
            }else return t1;
        }
        return 0;
    }
};

static auto fast=[](){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    return 0;
}();


// inefficient 
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
