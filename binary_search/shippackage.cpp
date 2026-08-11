class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = 0;
        int end = 0;
        int mid;
        int ans;
        int n = weights.size();
        for(int i=0;i<n;i++){
            start = max(start , weights[i]);
            end+=weights[i]; 
        }
        while(start<=end){
            mid = start + (end - start)/2;
            int cap = 0;
            int d = 1;
            for(int i = 0;i<n;i++){
                cap+=weights[i];
                if(cap>mid){
                    d++;
                    cap=weights[i];
                }
            }
            if(d<=days){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;

            }

        }
        return ans;
        
    }
};