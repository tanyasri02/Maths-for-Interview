class Solution {
public:
    double myPow(double x, int x1) {
        double ans=1.0;
        long long int wtf=x1,n=x1;
        if(n<0)
            n=-1*n;
        
        while(n>0)
        {
            if(n%2==1)
            {
                ans=ans*x;
                n-=1;
            }
            else
            {
                x*=x;
                n/=2;
            }
        }
        
        if(wtf<0)
            ans=double(1.0)/double(ans);
        return ans;
    }
};
