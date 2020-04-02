bool isHappy(int n) {   
        if(n<1)return false; // if n is negative integer then return false
        if(n==1)return true; // if n is 1 then return true
        set<int>s; // created a set 
        int sum; // created a variable of integer type
    // Approach:- We will keep splitting the digits and perform a^2+b^2....+m^2, and then perform the same operation wiht       //the resultant,we will find a pattern that the sum of the digits of the number will either going to be equal to n or 1
        // The idea is to loop until we either find 1 as sum or we find a number which is already present in the set
        while(1){ // started the loop, the loop will only terminate if sum==1 || sum is present in set
            sum=0;  // initialised sum=0 (every time)
            while(n) // this loop is for a^2+b^2+c^2....+m^2 operation
            {
                sum+=(n%10)*(n%10); //performing square of digit
                n=n/10; // trimming the number digit by digit
            }
            if(sum==1)return true; // if sum==1 return true
            else if(s.find(sum)!=s.end())return false; // if sum is already present in set return false
            s.insert(sum); // if the sum is not present in set then we insert the sum in set
            n=sum; //initialise n with the sum
        }
        return false; // just in case but, we will never reach till here
    }