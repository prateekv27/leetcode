class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       
        sort(nums.begin(), nums.end());

        int start = 0;
        int end = start + 1;
        int count = 0;

        while (end < nums.size()) {

            if (nums[end] - nums[start] < k) {
                end++;
            }

            else if (nums[end] - nums[start] > k) {
                start++;

                if (start == end) {
                    end++;
                }
            }

            else {
                count++;

              
                if (k == 0) {
                    int val = nums[start];

                    while (start < nums.size() && nums[start] == val)
                        start++;

                    end = start + 1;
                }
                else {
                    start++;
                    end++;

                   
                    while (start < nums.size() &&
                           nums[start] == nums[start - 1])
                        start++;
                }
            }
        }

        return count;
    }
};
        

        