/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/rotate-list
 * Difficulty : Medium
 */

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        int l = 0;
        ListNode *cur = head;
        while (cur)
        {
            l++;
            cur = cur->next;
        }
        if (l == 0)
        {
            return head;
        }
        k = (k % l) * (k % l != 0);
        while (k--)
        {
            cur = head;
            ListNode *last = NULL;
            while (cur->next)
            {
                last = cur;
                cur = cur->next;
            }

            if (last)
            {
                last->next = NULL;
                cur->next = head;
                head = cur;
            }
        }

        return head;
    }
};