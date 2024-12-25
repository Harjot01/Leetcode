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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL )
        {
            return list1;
        }

        ListNode *temp = new ListNode();
        ListNode *head = temp ;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                  temp->next = list2;
                  list2 = list2->next;
            }
            temp = temp ->next;
        }
        if(list1!= NULL)
        {
            temp->next = list1;
        }
        if(list2 != NULL)
        {
            temp->next = list2;
        }
        return head->next;
        
        
    }
    
};

int main()
{
    ListNode *a = new ListNode(0);
    ListNode *head1 = a;
    a->next = new ListNode(4);
    a = a->next;
    a->next = new ListNode(3);
    a = a->next;
    a->next = new ListNode(2);
    a = a->next;

    ListNode *b = new ListNode(0);
    ListNode *head2 = b;
    b->next = new ListNode(4);
    b = b->next;
    b->next = new ListNode(1);
    b = b->next;
    b->next = new ListNode(6);
    b = b->next;


    cout << head1->next->val << endl;

    Solution m;
    ListNode *result = m.mergeTwoLists(head1->next, head2->next);
    cout << "back in main function " << endl;

    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}