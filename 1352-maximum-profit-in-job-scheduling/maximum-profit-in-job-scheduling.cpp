class Solution {
public:
    int fun(int i,int n,vector<vector<int>>& job,vector<int>& s,vector<int>& dp)
    {
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        int x=lower_bound(s.begin()+i,s.end(),job[i][1])-s.begin();
        int pick=0,notpick=0;
        pick=fun(x,n,job,s,dp)+job[i][2];
        notpick=fun(i+1,n,job,s,dp);
        return dp[i]=max(pick,notpick);
    }
    int jobScheduling(vector<int>& start, vector<int>& end, vector<int>& profit) {
        int n=start.size();
        vector<vector<int>>job;
        for(int i=0;i<start.size();i++)
        {
            vector<int>a;
            a.push_back(start[i]);
            a.push_back(end[i]);
            a.push_back(profit[i]);
            job.push_back(a);
        }
        sort(job.begin(),job.end());
        sort(start.begin(),start.end());
        vector<int>dp(n+1,-1);
        return fun(0,n,job,start,dp);
    }
};