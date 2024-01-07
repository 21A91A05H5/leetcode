class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        int n=nums.size();
        vector<vector<int>>res;
        res.push_back({});
        int k=pow(2,n);
        for(int i=1;i<k;i++)
        {
            vector<int>v;
            int temp=i,c=0;
            while(temp){
                if(temp&1){
                    v.push_back(nums[c]);
                }
                c++;
                temp>>=1;
            }
            sort(v.begin(),v.end());
            if(s.find(v)==s.end()){
                res.push_back(v);
                s.insert(v);
            }
        }

        return res;
    }
};