vector<vector<string>> groupAnagrams(vector<string>& a) {
    unordered_map<string,vector<int> >m;
    vector<string>b;
    vector<vector<string>>ret;
    b=a;
    for(int i=0;i<b.size();++i)
    {
        string s=b[i];
        sort(s.begin(),s.end());
        b[i]=s;
    }
    for(int i=0;i<b.size();++i)
    {
        m[b[i]].emplace_back(i);
    }
    for(auto i=m.begin();i!=m.end();++i)
    {
        vector<int>v=i->second;
        vector<string>rets;
        for(int j=0;j<v.size();++j)
        {
            rets.emplace_back(a[v[j]]);
        }
        ret.emplace_back(rets);
    }
    return ret;
}