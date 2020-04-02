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