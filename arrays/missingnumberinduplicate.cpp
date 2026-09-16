class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;
        int j = i + 1;

        int index;
        int mis;

        vector<int> ans;

        while(j < n) {

            if(nums[i] != nums[j]) {
                i++;
                j++;
            }
            else {

               
                index = nums[i];
                ans.push_back(index);

               
                if(nums[0] != 1) {
                    mis = 1;
                }

                else if(nums[n-1] != n) {
                    mis = n;
                }

               
                else {
                    for(int k = 0; k < n - 1; k++) {
                        if(nums[k] == nums[k+1])
                continue;

           
                    if(nums[k+1] != nums[k] + 1) {
                        mis = nums[k] + 1;
                        break;
                        }
                    }
                }

                ans.push_back(mis);
                return ans;
            }
        }

        return ans;
    }
};