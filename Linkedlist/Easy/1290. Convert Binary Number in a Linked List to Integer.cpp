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
#include <math.h>
class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *nex;
        while (curr != NULL)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head = prev;
        int decimal = 0, count = 0;
        while (head != NULL)
        {
            if (head->val == 1)
            {
                decimal = decimal + pow(2, count);
            }
            count++;
            head = head->next;
        }
        return decimal;
    }
};