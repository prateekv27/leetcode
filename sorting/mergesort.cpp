class Solution {
public:
    void merge(vector<int>& nums, int s, int mid, int e){
        vector<int>temp;
        int i = s;
        int j = mid+1;
        while(i<=mid && j<=e){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i]);
                i++;
                
            }
            else{
                 temp.push_back(nums[j]);
                 j++;

            }

        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=e){
            temp.push_back(nums[j]);
            j++;

        }

        for(i = s;i<=e;i++){
            nums[i] = temp [i-s];
        }
    }

    void mergesort(vector<int>& nums , int s ,int e){
        if(s>=e){
            return;
        }
        int mid = s + (e-s)/2;
        mergesort(nums , s , mid);
        mergesort(nums , mid+1 , e);
        merge(nums , s ,mid,e);
    }

    vector<int> sortArray(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        mergesort(nums , s , e);
        return nums;



        
    }
};