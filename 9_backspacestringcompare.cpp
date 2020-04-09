int plusplus(int &count,int i,string a)
{
    while(i>-1)
    {
        if(a[i]=='#')
        {
            ++count;--i;
        }
        else if(count)
        {
            --count;--i;
        }
        else break;
    }
    return i;
}

bool backspaceCompare(string a, string b) {
    if(a.size()==0 && b.size()==0)return true;
    int count1=0,count2=0,i=a.size()-1,j=b.size()-1;
    while(i>-1 || j>-1)
    {
        i=plusplus(count1,i,a);
        j=plusplus(count2,j,b);
        if(i>-1 && j>-1 && a[i]!=b[j])return false;
        if(i>-1 != j>-1)return false;
        --i;
        --j;
    }
    return true;
}