//
// Created by zhangyangshuo on 2021/3/11.
//

#ifndef LEETCODELEARNCPLUS_SOLUTION_H
#define LEETCODELEARNCPLUS_SOLUTION_H

using namespace std;
#include <cstddef>
#include <map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char,int> mp;


        int ans = 0;
        int n = s.size();
        int i = 0;

        for(int j = 0 ; j< n;j++){
            char c = s[j];
            map<char, int>::iterator iter;
            iter = mp.find(c);
            if(iter != mp.end()){
                i = max(i,iter->second+1);
            }
            ans = max(ans,j-i+1);
            mp[c]=j;
        }


        return ans;

    }



};


#endif //LEETCODELEARNCPLUS_SOLUTION_H
