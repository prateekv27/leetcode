class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        
        int n = arr.size();
        int start=0;
        int end=0;
        long long sum=0;
        for (int i =0;i<n;i++){
            sum+=arr[i];
            end = max(end,arr[i]);
        }
        start=sum/h;
        if(start==0){
            start =1;
        }

        int ans;        
        int mid;
        while(start<=end){
            mid = start  + (end-start)/2;
            int time=0;
            for(int i =0;i<n;i++){
                time+= arr[i]/mid;
                if(arr[i]%mid){
                    time++;
                }
                
            }
            if(time>h){
                start=mid+1;
            }
            else{
                ans = mid;
                end = mid -1;
            }


        }
        return ans;
    }
};