class Solution {
public:
    bool isPowerOfFour(int n) {
        int c=0;
        if(n==1) return 1;
        if(n<0)return false;
        int temp=n;
        while(temp){
            c+=1;
            temp>>=1;
        }
        cout<<c;
        if((c%2==1) && (n|(1<<(c-1)))==1<<(c-1)) return true;
        return false;
    }
};