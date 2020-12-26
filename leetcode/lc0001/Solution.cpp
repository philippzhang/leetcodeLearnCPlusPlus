//
// Created by zhangyangshuo on 2019-05-09.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            // not found the second one
            if (m.find(nums[i])==m.end() ) {
                // store the first one poisition into the second one's key
                m[target - nums[i]] = i;
            }else {
                // found the second one
                result.push_back(m[nums[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};