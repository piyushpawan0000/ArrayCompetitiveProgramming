class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            
            int check = target-nums[i];
            
            if(find(nums.begin(),nums.end(),check)!=nums.end())
            {
                vector<int> :: iterator it;
                it = find(nums.begin(),nums.end(),check);
                int index = distance(nums.begin(),it);
                if(index == i)
                {
                    continue;
                }
                result.push_back(i);
                result.push_back(index);
                break;
            }
        }
        return result;
    }
};