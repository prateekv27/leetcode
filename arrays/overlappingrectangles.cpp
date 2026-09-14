class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int a = rec1[0];
        int b = rec1[2];
        int c = rec1[1];
        int d = rec1[3];
        int e = rec2[0];
        int f = rec2[2];
        int g = rec2[1];
        int h = rec2[3];

        if(a<f && e<b){
            if(c<h && g<d){
            return true;
            }
        }
        

        return false;

        
    }
};