// 206. Reverse Linked List
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
void print()
{
    ListNode *currentNode = head;
    while (currentNode != NULL)
    {
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}
ListNode *reverseHead = NULL;
void reverseList()
{
    ListNode *currentNode = head;
    while (currentNode != NULL)
    {
        // Needs to copy the currently holding reference
        ListNode *temp = currentNode->next;
        currentNode->next = reverseHead;
        reverseHead = currentNode;
        currentNode = temp;
    }
}
void reversePrint()
{
    ListNode *currentNode = reverseHead;
    while (currentNode != NULL)
    {
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}
int main()
{
    insert(3);
    insert(9);
    insert(23);
    insert(4);
    cout << "before reversal\n";
    print();
    cout << "After reversal \n";
    reverseList();
    reversePrint();
    return 0;
}