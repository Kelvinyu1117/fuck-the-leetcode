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
    ListNode *sortList(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;

        int cnt = 0;

        auto iter = head;
        while (iter)
        {
            iter = iter->next;
            cnt++;
        }

        return mergeSort(head, cnt);
    }

    ListNode *mergeSort(ListNode *head, int len)
    {
        if (head == nullptr || len == 0)
            return nullptr;
        if (len == 1)
            return head;

        int mid = len / 2;

        int cnt = 0;
        ListNode *prev = nullptr;
        ListNode *iter = head;

        while (iter && cnt < mid)
        {
            prev = iter;
            iter = iter->next;
            cnt++;
        }

        if (prev)
            prev->next = nullptr;

        ListNode *left = mergeSort(head, mid);
        ListNode *right = mergeSort(iter, len - mid);

        return merge(left, right);
    }

    ListNode *merge(ListNode *a, ListNode *b)
    {
        if (!a && !b)
            return nullptr;
        if (!a && b)
            return b;
        if (a && !b)
            return a;

        ListNode *iterA = a;
        ListNode *iterB = b;

        ListNode *head;
        if (iterA->val < iterB->val)
        {
            head = iterA;
            iterA = iterA->next;
        }
        else
        {
            head = iterB;
            iterB = iterB->next;
        }

        ListNode *iterC = head;

        while (iterA && iterB)
        {
            if (iterA->val < iterB->val)
            {
                iterC->next = iterA;
                iterA = iterA->next;
            }
            else
            {
                iterC->next = iterB;
                iterB = iterB->next;
            }

            iterC = iterC->next;
        }

        while (iterA)
        {
            iterC->next = iterA;
            iterA = iterA->next;
            iterC = iterC->next;
        }

        while (iterB)
        {
            iterC->next = iterB;
            iterB = iterB->next;
            iterC = iterC->next;
        }

        iterC->next = nullptr;

        return head;
    }
};