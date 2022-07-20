/* 876. Middle of the Linked List */
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
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *head = NULL;
int mid, ct = 0;
void insert(int value)
{
    if (head == NULL)
    {
        head = new ListNode();
        head->val = value;
        head->next = NULL;
    }
    else
    {
        ListNode *currentNode = head;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        ListNode *newNode = new ListNode();
        newNode->val = value;
        newNode->next = NULL;
        currentNode->next = newNode;
    }
}

ListNode *middle()
{
    int cnt = 0;
    ListNode *current_Node = head;

    while (current_Node != NULL)
    {
        ct++;
        current_Node = current_Node->next;
    }
    mid = (ct / 2) + 1;
    ListNode *currentNode = head;

    while (currentNode != NULL)
    {
        cnt++;
        if (cnt == mid)
        {
            break;
        }
        currentNode = currentNode->next;
    }
    return currentNode;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(x);
    }
    cout << middle()->val;
    return 0;
}