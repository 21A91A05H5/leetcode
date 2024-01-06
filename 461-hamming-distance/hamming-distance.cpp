class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y,c=0;
        while(a){
            if(a&1)
            {
                c+=1;
            }
            a>>=1;
        }
        return c;
    }
};