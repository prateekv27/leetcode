//NOT OPTIMAL
class Solution {
public:
    int p(int a){
        if(a<0){
            return 0;
        }
        if(a==0){
            return 1;
        }
        return p(a-1)+p(a-2);
        

    }
    int climbStairs(int n) {
        return p(n);

        
    }
};