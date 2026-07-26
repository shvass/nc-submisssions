class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> iMap;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(iMap.contains(target - nums[i])) return {iMap[target - nums[i]], i};
            iMap[nums[i]] = i;
        }

        return {-1, -1};
    }
};
