//446. Arithmetic Slices II - Subsequence
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<map<long long,long long>>mp(nums.size());
        int temp=0,n=nums.size(),c=0;
        set<long long>s(nums.begin(),nums.end());
        // for(auto it:nums)s.insert(it);
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                long long diff=(long long)nums[i]-(long long)nums[j];
                if(mp[j][diff]) temp=mp[j][diff];
                else temp=0;
                c+=temp;
                if(s.find(nums[i]+diff)!=s.end())
                {
                    mp[i][diff]+=temp+1;
                }
            }
        }
        return c;
    }
};
