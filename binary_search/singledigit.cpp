class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];
        int start = 1;
        int end = n - 2; 
        int mid;
        int ans = 0;
        
        while(start <= end) {
            mid = start + (end - start) / 2;
            
            
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                ans = arr[mid];
                break;
            }

           
            if(mid % 2 == 1) {
                if(arr[mid] == arr[mid-1]) {
                    start = mid + 1; 
                } else {
                    end = mid - 1;   
                }
            }
            
            else {
                if(arr[mid] == arr[mid+1]) {
                    start = mid + 1; 
                } else {
                    end = mid - 1;   
                }
            }
        }
        return ans;
    }
};