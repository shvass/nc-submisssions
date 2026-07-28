class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        map<int, set<int>> fmap;

        for(int i = 0; i < n; i++)
        {
            int num = nums[i];
            int freq = count[num];

            auto& st = fmap[freq];
            
            if(st.size() == 1)
                fmap.erase(freq);
            else 
                st.erase(num);

            fmap[freq+1].insert(num);

            count[num]++;
        };

        vector<int> ret;
        for(auto itr = fmap.rbegin(); itr != fmap.rend(); itr++)
        {
            auto& st = itr->second;
            for(int num : st)
                ret.push_back(num);

            if(ret.size() >= k) return ret;
        };

        return ret;
    }
};
