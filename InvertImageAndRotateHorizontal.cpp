class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> myvect;
        for(int i=0;i<A.size();i++)
        {
            vector<int> result;
            for(int j=A[i].size()-1;j>=0;j--)
            {
                int temp = A[i][j]^1;
                result.push_back(temp);
            }
            myvect.push_back(result);
        }
        return myvect;
    }
    
};