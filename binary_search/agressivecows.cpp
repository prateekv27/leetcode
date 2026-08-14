class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int start = 0;
        int end = position[n-1]-position[start];
        int ans;
        int mid;
        while(start<=end){
            mid = start + (end -start)/2;
            int count = 1;
            int pos = position[0];
            for(int i =0;i<n;i++){
                if(pos+mid<=position[i]){
                    count++;
                    pos= position[i];
                }
            }
            if(count<m){
                end = mid -1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
        
    }
};