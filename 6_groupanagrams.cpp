/*
	APPROACH:- first i have created a duplicate of original string type vector, then i have sorted 
	each string contained in that duplicate string in lexographical order, then i have created a map
	in which key is gonna be the string contained in that sorted duplicate vector, and its each value
	is gonna be a vector contains which contains index,then i am simply iterating the map which have 
	the index as values, and then simply using those indexs in each key,we can simply create a vector
	and in that vector we can store the group of anagram together and we have to return a vector
	that contains multiple vectors inside it, thus we have to create multiple vector for each group
	and push those groups inside the parent vector, i know its a vague explination but, i am running 
	out of time bros so i hope you are gonna get a little bit after watching the code!  
*/

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