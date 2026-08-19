class Solution {
public:
    double myPow(double x, int n) {
        // using builin functions
       /* double res =  pow(x,n);
        return res; */

        // // using recursion
        // if(x == 0){
        //     return 1;
        // }else{
        //     return myPow(x - 1 , n );
        // }
        return pow(x,n);
    }
};