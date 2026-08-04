//peakindexmountaiarray
//leetcode ques no 852

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid;
        int ans;
        while(start<=end){
            mid = end + (start - end)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                ans = mid;
                break;
            }
            else if(arr[mid]<arr[mid-1]){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return ans;
        
    }
};