
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int start = 0;
        int end = n-1;
        int ans = 0;
        
        while(start<=end){
            if(people[start]+people[end]>limit){
                if(people[end]<=limit){
                    ans+=1;
                    n--;
                    
                }
               end--;
            }
            else{
                if(n<=2 && people[start]+people[end]<=limit){
                    ans+=1;
                    break;

                }
                else if(n>2 && people[start]+people[end]<=limit){
                    ans+=1;
                    start++;
                    end--;

                }
            }
        }
        return ans;



        
    }
};