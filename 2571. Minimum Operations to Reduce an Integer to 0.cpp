//***self-solved***
/*  2571. Minimum Operations to Reduce an Integer to 0
You are given a positive integer n, you can do the following operation any number of times:
Add or subtract a power of 2 from n.
Return the minimum number of operations to make n equal to 0.
A number x is power of 2 if x == 2i where i >= 0.
*/
class Solution {
public:
    int minOperations(int n) {
        queue<long>q;
        q.push(n);
        int c=1;
        while(!q.empty() )
        {
            long n=q.front();
            if((n&(n-1))==0) return c;
            long l=ceil(log2(n))-1;
            long r=ceil(log2(n));
            l=(1<<l);
            r=(1<<r);
            q.pop();
            if((n-l)<(r-n)){
                q.push(n-l);
            }
            else{
                q.push(r-n);
            }
            c++;
        }
        return -1;
    }
};
