//
// Created by zhangyangshuo on 2021/3/10.
//


#ifndef LEETCODELEARNCPLUS_SOLUTION_H
#define LEETCODELEARNCPLUS_SOLUTION_H

using namespace std;
#include <cstddef>

struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ret = new ListNode(0);
        ListNode * temp = ret;
        int s = 0;
        int r = 0;
        while (l1!=NULL || l2!=NULL){
            int x =  l1!=NULL? l1->val :0;
            int y =  l2!=NULL? l2->val :0;
            r = x+y+s;
            s = r/10;
            r = r%10;
            temp->next = new ListNode(r);
            temp=temp->next;
            l1 = l1!=NULL?l1->next:NULL;
            l2 = l2!=NULL?l2->next:NULL;
        }
        if(s>0){
            temp->next = new ListNode(1);
        }
        return ret->next;
    }
};


#endif //LEETCODELEARNCPLUS_SOLUTION_H
