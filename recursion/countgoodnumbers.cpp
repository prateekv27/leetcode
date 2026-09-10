class Solution {
public:
    long long rec(long long a,long long b){
        if(b==0){
            return 1;
        }
        long long half = rec(a,b/2);
        long long full = (half*half)%1000000007;
        if(b%2==1){
            full = (a*full)%1000000007;
        }
        return full;
    }

    int countGoodNumbers(long long n) {
        long long ans =  rec(4,n/2)*rec(5,(n+1)/2)%1000000007;
        return ans;
        

        
    }
};


