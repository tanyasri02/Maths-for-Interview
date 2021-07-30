class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size(),in1,in2;
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                in1=i;break;
            }
        }
        if(in1<0)
            reverse(a.begin(),a.end());
        else
        {
          for(int i=n-1;i>=0;i--)
           {
            if(a[i]>a[in1])
            {
                in2=i;break;
            }
           }
        swap(a[in1],a[in2]);
        
        reverse(a.begin()+in1+1,a.end());
        }
    }
};
