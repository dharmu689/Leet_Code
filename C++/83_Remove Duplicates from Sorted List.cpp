//Question - https://leetcode.com/problems/remove-duplicates-from-sorted-list/

#include <bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* temp = head;
            while (temp != NULL && temp->next != NULL) {
                if (temp->val == temp->next->val) {
                    ListNode* todl = temp->next;
                    temp->next = temp->next->next;
                    delete todl;
                } else {
                    temp = temp->next;
                }
            }
            return head;
        }
    };