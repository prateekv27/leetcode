class Solution {
public:
    int num(int a){
        if(a==0){
            return 0;
        }
        if(a==1){
            return 1;
        }
        return (num(a-1) + num(a-2));
    }
    int fib(int n) {
        return num(n);

        
    }
};