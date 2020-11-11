//
// Created by zhangyangshuo on 2020/11/10.
//
#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;
#include <iostream>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int>record;
        for(int i = 0;i!=nums.size();i++){
            auto found = record.find(nums[i]);
            if(found!=record.end()){
                return {found->second,i};
            }
            record.emplace(target-nums[i],i);
        }
        return {-1,-1};
    }
};

int main(){
    Solution s;
    std::vector<int> v1{2, 7, 11, 15};
    std::cout << (s.twoSum(v1, 9) == std::vector<int>{0, 1}) << std::endl;
    std::vector<int> v2{0, 4, 3, 0};
    std::cout << (s.twoSum(v2, 0) == std::vector<int>{0, 3}) << std::endl;
    std::vector<int> v3{-3, 4, 3, 90};
    std::cout << (s.twoSum(v3, 0) == std::vector<int>{0, 2}) << std::endl;
}