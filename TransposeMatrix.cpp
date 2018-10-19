class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> myvect;
        for(int i=0;i<A[0].size();i++)
        {
            vector<int> result;
            for(int j=0;j<A.size();j++)
            {
                result.push_back(A[j][i]);
            }
            myvect.push_back(result);
        }
        return myvect;
    }
};