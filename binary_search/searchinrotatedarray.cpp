class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size()-1;
        int mid;
        int ans = -1;
        while(start<=end){
            mid = start + (end - start)/2;
            if(target==arr[mid]){
                ans = mid;
                break;
            }
            else if(arr[mid]>=arr[start]){
                if(arr[start]<=target && target<=arr[mid]){
                    end = mid -1;

                }
                else{
                    start = mid +1;
                }            
                }
            else{
                if(arr[mid]<target && arr[end]>=target){
                    start = mid + 1;
                }
                else{
                    end = mid -1;
                }
            }

        }
            return ans;
    }
};