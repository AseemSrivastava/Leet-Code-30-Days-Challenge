/*
Approach:- we are given a array of numbers in range 0<=a[i]<=1000, so we have to create a array to
store the count of occurence of each element, then we have to traverse the array and store the count
of each eleement occurence ex:- [1,1,2,2] , {1:2, 2:2} etc, then i have traversed the array in which
i have stored the count and checked if at the previous index if the value>0 and the current index value
is also greater than 0 then, i am gonna increase the counting elements count.

Space Complexity :- O(1) because we have used constant space,because the space is not depending upon
the size of input elements,
Time Complexity:- O(1) because we will always traverse one time 

*/

int countElements(vector<int>& a) {
    int b[1001]={0};
    int counting_elements=0;
    int n = a.size();
    for(int i=0;i<n;++i)++b[a[i]];
    for(int i=1;i<=1000;++i)
        if(b[i-1]>0 && b[i]>0)
            counting_elements+=b[i-1];
    return count;
}
