class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
       int m=matrix.size();
       int n=matrix[0].size();
       int strow=0;
       int stcol=0;
       int enrow=m-1;
       int encol=n-1;
       while(strow<=enrow&&stcol<=encol)
       {
       for(int i=stcol;i<=encol;i++)
       {
ans.push_back(matrix[strow][i]);
       }
       for(int i=strow+1;i<=enrow;i++)
       {
        ans.push_back(matrix[i][encol]);
       }
      
       for(int i=encol-1;i>=stcol;i--)
       {
        if(strow==enrow)
        {
            break;
        }
        ans.push_back(matrix[enrow][i]);
       }

       for(int i=enrow-1;i>=strow+1;i--)
       {
        if(stcol==encol)
        {
            break;
        }
        ans.push_back(matrix[i][stcol]);
       }
       strow++;
       enrow--;
       stcol++;
       encol--;
       }
   return ans;
    }
};