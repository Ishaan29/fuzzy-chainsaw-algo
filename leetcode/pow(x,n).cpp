class Solution {
public:
    double helper(double x, int n){
        if(n==0) return 1;
        double s;
        if(n < 0){
            x = 1/x;
            s = helper(x,-(n/2));
            if(n&1){
                return x*s*s;
            }else{
                return s*s;
            }
        }
        s = helper(x,n/2);
        return n&1? x*s*s: s*s;
    }
    double myPow(double x, int n) {
        return helper(x,n);
    }
};
