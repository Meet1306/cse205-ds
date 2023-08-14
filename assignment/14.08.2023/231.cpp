class Solution {
public:

    bool po2(int n){
        if(n==1)
            return true;
        else if(n%2!=0)
            return false;
        return po2(n/2);

    }
    
    bool isPowerOfTwo(int n) {

        if(n<=0)
            return false;
        else
            return po2(n);
    }
};