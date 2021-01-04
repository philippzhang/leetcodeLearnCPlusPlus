//
// Created by zhangyangshuo on 2021/1/4.
//

#ifndef LEETCODELEARNCPLUSPLUS_SOLUTION_H
#define LEETCODELEARNCPLUSPLUS_SOLUTION_H

#include <cstddef>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    using vcIt = vector<int>::const_iterator;
    TreeNode* helper(vcIt preStart, vcIt preEnd,vcIt inStart, vcIt inEnd){
        if(preStart>=preEnd || inStart>= inEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(*preStart);
        auto inRoot = std::find(inStart,inEnd, root->val);
        root->left = helper(next(preStart),next(preStart,inRoot-inStart+1),inStart,inRoot);
        root->right = helper(next(preStart,inRoot-inStart+1), preEnd,next(inRoot),inEnd);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder.cbegin(),preorder.cend(),inorder.cbegin(),inorder.cend());
    }
};


#endif //LEETCODELEARNCPLUSPLUS_SOLUTION_H
