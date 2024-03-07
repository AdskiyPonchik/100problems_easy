//
// Created by adskiyponchik on 3/7/24.
//

#ifndef INC_100PROBLEMS_LINKEDLIST_H
#define INC_100PROBLEMS_LINKEDLIST_H

#endif //INC_100PROBLEMS_LINKEDLIST_H

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    Solution();

    ListNode *removeElements(ListNode *head, int val) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = head;
        ListNode *prev = dummy;

        while (cur != nullptr) {
            if (cur->val == val) {
                prev->next = cur->next;
            } else {
                prev = cur;
            }
            cur = cur->next;
        }

        return dummy->next;
    }
};
