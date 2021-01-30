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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head != NULL)
        {
            ListNode *ptr = head->next;
            ListNode *prev = head;
            while (ptr != NULL)
            {
                if (ptr->val == prev->val)
                {
                    prev->next = ptr->next;
                    ptr = ptr->next;
                    continue;
                }
                else
                {
                    ptr = ptr->next;
                    prev = prev->next;
                }
            }
        }
        return head;
    }
};