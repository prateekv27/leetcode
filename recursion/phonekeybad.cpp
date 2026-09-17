class Solution {
public:
    void ans(string digits,string output,int i,string map[],vector<string>&  p){
        if(i>=digits.length()){
            p.push_back(output);
            return;
        }

        int num = digits[i] - '0';
        string val =  map[num];
        for(int j = 0;j<val.length();j++){
            output.push_back(val[j]);
            ans(digits,output,i+1,map,p);
            output.pop_back();
        }


    } 
    vector<string> letterCombinations(string digits) {
        vector<string> p;
        string output = "";
        int i = 0;
        string map[10] = {"" , "" , "abc" , "def" , "ghi" ,"jkl", "mno" ,"pqrs","tuv" ,"wxyz" };
        ans(digits,output,i,map,p);
        return p;
            

        
        
    }
};