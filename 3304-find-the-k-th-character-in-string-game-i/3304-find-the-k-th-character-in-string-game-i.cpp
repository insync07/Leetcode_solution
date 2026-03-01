class Solution {
public:
    char kthCharacter(int k) {
         k=k-1;
        int shift=0;
        while(k>0)
        {
            shift+=(k&1);
            k=k>>1;
        }
        return 'a'+shift;
    }
};