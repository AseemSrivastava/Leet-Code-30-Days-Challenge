/* Approach:-  XOR TABLE
               a   b   r
               0   0   0
               1   0   1
               0   1   1
               1   1   1 

If we do xor of a number num with itself the resultant will always be 0,Ex:- 5^5=0,
Bit representation:- 
                        4  2  1
                        1  0  1      <----5
                           ^             XOR
                        1  0  1      <----5
                        0  0  0
Thus if we perform xor:
               5^6^9^5^6^9:- THe result ill be 0;
 
 and if we have a unique number 'n' which is only present once in a group of duplicate 
 numbers then after performing xor on all the number we will be left with only number 'n'
 Ex:- we have 8^6^8, then result will be 6
 
 Bit representation:-
                8 4 2 1
                1 0 0 0  <----8
                    ^        XOR
                0 1 1 0  <----6
                --------
                1 1 1 0 <-----14
                   ^         XOR
                1 0 0 0 <------8
                --------
                0 1 1 0 <------6 RESULT
 
Thus, in program we have the elments present 
in the array, and if we perform xor with all the elements we will get our single unique number
*/

int singleNumber(vector<int>& array) {
        if(array.size()==0)return 0; //if the size of array is 0,return 0
        int result=0; 				 // initialised result with 0
        for(int it:array)result^=it; //created a iterator which will iterate and xor each element of the array and store it in the result                                           //each element in the array and then store it in result 
        return result;               //return the single number
}

// or

int singleNumber(vector<int>& array) {
        if(array.size()==0)return 0; //if the size of array is 0,return 0
        int result=a[0]; 				 // initialised result with first element
        for(int i=1;i<array.size();++i)result^=it; //for loop which will iterate and xor each element of the array and store it in the result                                           //each element in the array and then store it in result 
        return result;               //return the single number
}
