class Solution {
public:
    int seive(int n)
    {
        bool prime[n+10];
        memset(prime,true,n+1);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n+1;i+=1)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=n+1;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                c++;
            }
        }
        return c;
    }
    int countPrimes(int n) {
        return seive(n);
    }
};