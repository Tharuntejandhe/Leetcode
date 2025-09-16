class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>idx;
        for (int i=0;i<(int)nums.size();++i){
            int comp=target-nums[i];
            auto it=idx.find(comp);
            if(it!=idx.end()){
                return{it->second,i};
            }
            idx[nums[i]]=i;
        }
        return{};
    }
};