class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;
        if (x!=0 && x %10==0)
        return false;
        int reverted=0;
        while(x>reverted){
            int digit=x%10;
            reverted =reverted*10+digit;
            x/=10;
        }
        return (x== reverted)||(x==reverted/10);
    }
};