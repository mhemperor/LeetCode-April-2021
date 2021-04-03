/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    bool isPalindrome(ListNode* head) {        
        int x;   
        ListNode* point;
        point=head;
        stack<int> s;
        
        while (point != NULL){
            s.push(point->val);
            point=point->next;
        }
        
        while (head !=NULL){
            x=s.top();
            s.pop();
            if (x != head->val) return false;
            head=head->next;
        }
        return true;
    }
};