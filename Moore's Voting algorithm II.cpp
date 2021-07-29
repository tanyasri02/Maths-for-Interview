class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n1=-1,n2=-1;
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<nums.size();++i)
        {
            if(n1==nums[i])
                cnt1++;
            else if(n2==nums[i])
                cnt2++;
            
            else if(cnt1==0)
            {
                cnt1++;
                n1=nums[i];
            }
            else if(cnt2==0)
            {
                cnt2++;
                n2=nums[i];
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        int n=nums.size();
        cnt1=0;cnt2=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==n1)
                cnt1++;
            else if(nums[i]==n2)
                cnt2++;
        }
         if(cnt1>n/3)
        {
            ans.push_back(n1);
        }
        if(cnt2>n/3)
        {
            ans.push_back(n2);
        }
        return ans;
    }
};
