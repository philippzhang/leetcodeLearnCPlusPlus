//
// Created by zhangyangshuo on 2021/3/11.
//

#include "Solution.h"

#include <iostream>

using namespace std;

int main()
{
    Solution s;

    cout <<( s.lengthOfLongestSubstring("abcabcbb") == 3 ) << endl;
    cout <<( s.lengthOfLongestSubstring("bbbbb") == 1 ) << endl;
    cout <<( s.lengthOfLongestSubstring("a") == 1 ) << endl;
    cout <<( s.lengthOfLongestSubstring("au") == 2 ) << endl;
    cout <<( s.lengthOfLongestSubstring("bwt") == 3 ) << endl;
    cout <<( s.lengthOfLongestSubstring("abba") == 2 ) << endl;

}
