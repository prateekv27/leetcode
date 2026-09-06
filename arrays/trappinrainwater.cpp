class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> l(n);
        vector<int> m(n);
        l[0] = height[0];
        for(int i = 1;i<n;i++){
            l[i] = max(l[i-1], height[i]);

        }
        m[n-1] = height[n-1];
        for(int i=n-2;i>=0;i-- ){
            m[i] = max(m[i+1] , height[i]);

        }
        int sum = 0;

        for(int i = 0;i<n;i++){
            sum += min(l[i] , m[i]) - height[i];
        }
        return sum;

        
    }
};