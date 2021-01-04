//
// Created by zhangyangshuo on 2021/1/4.
//

#ifndef LEETCODELEARNCPLUS_SOLUTION_H
#define LEETCODELEARNCPLUS_SOLUTION_H

#endif //LEETCODELEARNCPLUS_SOLUTION_H

#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> record;
        for (int i = 0; i != nums.size(); ++i) {
            auto found = record.find(nums[i]);
            if (found != record.end())
                return {found->second, i};
            record.emplace(target - nums[i], i);
        }
        return {-1, -1};
    }
};