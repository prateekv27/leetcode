class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int ans = 0;
        int maxi = 0;
        while(s<e){
            
             ans= min(arr[s],arr[e])*(e-s);
                maxi = max(ans , maxi);
                if(arr[s]>arr[e]){
                    e--;
                }
                else{
                    s++;
                }
               

            

        }
        return maxi;
        
    }
};