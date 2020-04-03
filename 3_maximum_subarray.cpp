/* Approach:- 
We take each element one by one and check if sub_array_sum>element+sub_array_sum 
or sum>a[i]+sum, if yes then we will check if sub_array sum>max_subarray_sum, if yes
then we will replace the max_subarray_sum with sub_array_sum,

    -2 1 -3 4 -1 2 1
Step 1

Initially we have -2 in both val and max
sub_array=-2
max_sub_array=-2

Step 2  
        i
     -2 1 -3 4 -1 2 1

     -2+1<1
sub_array=1
max_sub_array=1

Step 3  
           i
     -2 1 -3 4 -1 2 1

     -3<-3+1
sub_array=-2
max_sub_array=1


Step 4  
             i
     -2 1 -3 4 -1 2 1

     -2+4<4
sub_array=4
max_sub_array=4


Step 5  
                i
     -2 1 -3 4 -1 2 1

     -1<-1+4
sub_array=3
max_sub_array=4


Step 6  
                  i
     -2 1 -3 4 -1 2 1

     2<2+3
sub_array=5
max_sub_array=5


Step 7  
                    i
     -2 1 -3 4 -1 2 1

     1<5+1
sub_array=6
max_sub_array=6

Final answer :- max_sub_array=6

*/


int maxSubArray(vector<int>& a) {
    int n=a.size();                 // stored the size of vector
    if(n==0)return 0;               // if size of vector is 0 we will return 
    int max_sum=a[0],temp_sum=a[0]; // 2 integer type variable in which we will store maximum continuous sum of subarray
                                    // and a temporary sum of sub array, and initially in them we have the 0th element
    for(int i=1;i<n;++i){            // we will start the loop fron 1st position b/c we have already included the first           {                                // element in max_sum & temp_sum 
        temp_sum=max(a[i],temp_sum+a[i]); // we will check if ith element is greater or ith element+initial element                                                     // & we will store the greater one in temp_sum
        max_sum=max(max_sum,temp_sum);   // we will check which is greater the elemnt which is present in the max_sum                                                  // initially or the temp_sum
    }
    return max_sum;
}
