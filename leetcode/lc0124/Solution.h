//
// Created by zhangyangshuo on 2020/12/26.
//

#ifndef LEETCODELEARNCPLUS_SOLUTION_H
#define LEETCODELEARNCPLUS_SOLUTION_H

#endif //LEETCODELEARNCPLUS_SOLUTION_H

#include <cstddef>
#include <algorithm>
#include <iostream>
#include <limits.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution{
    int maxPathSum(TreeNode *root,int &maxSum){
        if(!root)return 0 ;
        int leftMax = std::max(0,maxPathSum(root->left,maxSum));
        int rightMax = std::max(0,maxPathSum(root->right,maxSum));
        maxSum = std::max(maxSum,leftMax+rightMax+root->val);
        return root->val+std::max(leftMax,rightMax);
    }
public:
    int maxPathSum(TreeNode * root){
        int maxSum = INT_MIN;
        maxPathSum(root,maxSum);
        return maxSum;

    }
};