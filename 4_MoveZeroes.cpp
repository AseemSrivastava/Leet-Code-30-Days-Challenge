/*
Approach:- 
            
# Point:-1   
    ij
    5  1  0  3  12

       ij
    5  1  0  3  12

We will going to to take two pointers:- one for the zeroes and second for non zero elements
Initially both are going to point at 0th index and if initially the element is non-zero then
we will increment both the pointers.

# Point:-2
 If element at ith index is zero and at jth index non-zero then perform a swap
       i  j
    5  0  1  3  12

       i  j
    5  1  0  3  12 

# Point:-3
  If element at ith index is non zero then increment i
    i     j
    1  0  1  3  12

       i  j
    5  0  1  3  12   

# Point:-4
  If element at jth index is zero then increment j
    i  j
    5  0  1  3  12

    i     j
    5  0  1  3  12
*/
void moveZeroes(vector<int>& a) {
    if(a.size()==0 || a.size()==1)return;
    int i=0,j=0,n=a.size();
    while(j<n && i<n)
    {
        if(a[i]!=0 && a[j]!=0)                                        // Go to Point:-1
        {
            ++i;++j;
        }
        else if(i<n && j<n && a[i]==0 && a[j]!=0)swap(a[i++],a[j++]); // Go to Point:-2
        else if(i<=j && i<n && a[i]!=0)++i;                           // Go to Point:-3
        else if(j<n && a[j]==0)++j;                                   // Go to Point:-4
    }
}