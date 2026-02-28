class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        vector<int>freq(10,0);
        for(int d:digits)
        {
            freq[d]++;
        }
        for(int num=100;num<=998;num+=2)
        {
            int a=num/100;
            int b=(num/10)%10;
            int c=num%10;

            freq[a]--;
            freq[b]--;
            freq[c]--;
            if(freq[a]>=0 && freq[b]>=0 && freq[c]>=0)
            ans.push_back(num);

              freq[a]++;
            freq[b]++;
            freq[c]++;
        }
return ans;
    }
};