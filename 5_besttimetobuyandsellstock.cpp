int maxProfit(vector<int>& a) {
        int n=a.size();
        if(n==0)return 0;
        int max=0,i=1;
        while(i<n)
        {
            max+=(a[i]>a[i-1] ? a[i]-a[i-1] : 0);
            ++i;
        }
        return max;
    }

    //or

int maxProfit(vector<int>& a) {
    int n=a.size();
    if(n==0)return 0;
    int profit=0,i=0;
    for(int i=1;i<n;++i)profit+=(a[i]>a[i-1] ? a[i] - a[i-1] : 0);
    return profit;
}