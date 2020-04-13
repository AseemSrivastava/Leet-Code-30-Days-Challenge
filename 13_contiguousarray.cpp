int findMaxLength(vector<int>& a) {
    unordered_map<int,int>m;
    m[0]=-1;
    int maxlen=0,count=0;
    for (int i=0;i<a.size();++i) {
        count+=a[i]==1 ? 1 : -1;
        if(m.find(count)!=m.end())maxlen=max(maxlen,i-m[count]);
        else m[count]=i;
    }
    return maxlen;
}   