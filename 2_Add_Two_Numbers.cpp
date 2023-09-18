#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = NULL;
    }

    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }

    ListNode(int val, ListNode *next)
    {
        this->val = val;
        this->next = next;
    }
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = new ListNode(0);
        ListNode *temp = res;
        int sum, carry = 0;
        while (l1 != NULL and l2 != NULL)
        {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            res->next = new ListNode(sum % 10);
            l1 = l1->next;
            l2 = l2->next;
            res = res->next;
        }

        while (l1 != NULL)
        {
            sum = l1->val + carry;
            carry = sum / 10;
            res->next = new ListNode(sum % 10);
            l1 = l1->next;
            res = res->next;
        }

        while (l2 != NULL)
        {
            sum = l2->val + carry;
            carry = sum / 10;
            res->next = new ListNode(sum % 10);
            l2 = l2->next;
            res = res->next;
        }

        while (carry != 0)
        {
            res->next = new ListNode(carry);
            carry = sum / 10; // ***** yahape carry = carry / 10 ayega kyuki iss loop mai hume carry ko decrement krna hai *****
            res = res->next;
        }

        return temp->next;
    }
};

int main()
{

    // a and b are two pointers
    // yahape hum bna rhe hai
    ListNode *a = new ListNode(0);
    ListNode *head1 = a;
    a->next = new ListNode(2);
    a = a->next;
    a->next = new ListNode(4);
    a = a->next;
    a->next = new ListNode(3);

    ListNode *b = new ListNode(0);
    ListNode *head2 = b;
    b->next = new ListNode(5);
    b = b->next;
    b->next = new ListNode(6);
    b = b->next;
    b->next = new ListNode(4);

    Solution obj;
    ListNode *result = obj.addTwoNumbers(head1->next, head2->next);

    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}