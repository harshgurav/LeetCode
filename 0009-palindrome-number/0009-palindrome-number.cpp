class Solution {
public:
    bool isPalindrome(int x) {
    
    double backN = x;
    double revnum = 0; 
    
    while (x > 0){
        int ld = x % 10;

        
        revnum = (revnum * 10) + ld;
        x = x / 10;
    }
    if(revnum == backN) {
            return true;
        } else {
            return false;
        }
    
    };
};