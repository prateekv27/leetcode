class Solution {
public:
    double Pow(double a,long long b){
         if (b==0){
            return 1;
        }
        if(b>0){
            double half = Pow(a,b/2);
            double full = (half*half);
            if(b%2==1){
            full = (a*full);
        }
            return full;
        }
        else{
            a = 1/a;
            b = -b;
            double half = Pow(a,b/2);
            double full = (half*half);
            if(b%2==1){
            full = (a*full);
        }
            return full;

        }
        
    }
    double myPow(double x, int n) {
        return Pow(x,n);
       

        
    }
};