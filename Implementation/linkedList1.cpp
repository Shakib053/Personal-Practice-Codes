/*
LeetCode 1290
--- Convert Binary Number in a Linked List to Integer ---
*/

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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    int binaryToDecimal(string n)
    {
        string num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        int base = 1;

        int len = num.length();
        for (int i = len - 1; i >= 0; i--)
        {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }

        return dec_value;
    }

    int getDecimalValue(ListNode *head)
    {

        vector<string> v;
        string ans = "";

        ListNode *currentNode = head;
        while (currentNode != NULL)
        {
            ans = ans + to_string(currentNode->val);
            currentNode = currentNode->next;
        }
        int result = binaryToDecimal(ans);
        return result;
    }
};