//
// Created by zhangyangshuo on 2019-05-09.
//
#include "Solution.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;

    std::vector<int> v1{2, 7, 11, 15};
    cout<<( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) ) << endl;

    std::vector<int> v2{0, 4, 3, 0};
    cout<<( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) ) << endl;

    std::vector<int> v3{-3, 4, 3, 90};
    cout<<( (s.twoSum(v3, 0) == std::vector<int>{0, 2}) ) << endl;
}