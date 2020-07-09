class Solution {
public:
    void rotate(string &a, bool direction,int sh_amt)
    {
        sh_amt%=a.size();
        if(direction)
        {
            reverse(a.end()-sh_amt,a.end());
            reverse(a.begin(),a.end()-sh_amt);
        }
        else{
            reverse(a.begin(),a.begin()+sh_amt);
            reverse(a.begin()+sh_amt,a.end());
        }
        reverse(a.begin(),a.end());
    }
    
    string stringShift(string s, vector<vector<int>>& shift) {
        int l=0,r=0;
        for(int i=0;i<shift.size();++i)
        {
            if(shift[i][0])r+=shift[i][1];
            else l+=shift[i][1];
        }
        if(l==r)return s;
        if(r>l)rotate(s,1,r-l);
        else rotate(s,0,l-r);
        return s;
    }
};

static auto fast=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();
