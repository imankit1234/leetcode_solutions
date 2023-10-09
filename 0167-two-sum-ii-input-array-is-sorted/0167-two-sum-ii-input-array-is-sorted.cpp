class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int start=0;
        int end=nums.size()-1;
        vector<int>v;
        while(start<=end)
        {
            if(nums[start]+nums[end]==target)
            {
                v.push_back(start+1);
                v.push_back(end+1);
                return v;
            }
            else if(nums[start]+nums[end]>target)
            end--;
            else
            start++;
        }
        return v;
    }
};