class Solution {
public:
bool numberofdays(vector<int>& weights, int mid,int days)
{
    int current=0;
    int dayscount=1;
    for(int i=0;i<weights.size();i++)
    {
        if(current+weights[i]<=mid)
        {
            current=current+weights[i];
        }
        else{
            dayscount++;
            current=weights[i];
        }
       
    }
     return dayscount<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
        }
        int high =sum;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if( numberofdays(weights,mid,days)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};