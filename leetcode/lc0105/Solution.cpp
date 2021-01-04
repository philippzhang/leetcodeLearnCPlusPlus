//
// Created by zhangyangshuo on 2021/1/4.
//

#include "solution.h"
#include <iostream>
#include <queue>
void print_bfs(TreeNode* p)
{
    if (!p) return;
    std::vector<std::string> v;
    std::queue<TreeNode *> q;
    q.push(p);
    do {
        TreeNode *node = q.front(); q.pop();
        if (node)
            v.push_back(std::to_string(node->val));
        else {
            v.push_back("#");
            continue;
        }
        q.push(node->left);
        q.push(node->right);
    } while (!q.empty());

    auto found = std::find_if(v.rbegin(), v.rend(), [](const std::string &s){ return s != "#"; });
    v.erase(found.base(), v.end());
    for (const auto &s : v)
        std::cout << s << ",";
    std::cout << "\b " << std::endl;
}

int main()
{
    Solution s;
    std::vector<int> preorder{3,9,20,15,7};
    std::vector<int> inorder{9,3,15,20,7};
    print_bfs(s.buildTree(preorder, inorder));
}