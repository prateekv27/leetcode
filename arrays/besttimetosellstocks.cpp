class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int ans;
        int start = 0;
        int end = start+1;
        int n = prices.size();
        while(end<n){
            if(prices[start]>prices[end]){
                start=end;
                end++;
            }
            else{
                ans=(prices[end]-prices[start]);
                maxi = max(maxi, ans);
                end++;
                
            }
        }
        return maxi;

    }
};
