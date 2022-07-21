#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
};

node *root = NULL;
void insert(int value)
{
    if (root == NULL)
    {
        root = new node();
        root->val = value;
        root->next = NULL;
    }
    else
    {
        node *currentNode = root;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        node *newNode = new node();
        newNode->val = value;
        newNode->next = NULL;
        currentNode->next = newNode;
    }
}
void print()
{
    node *currentNode = root;
    while (currentNode != NULL)
    {
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}

void deleteNode(int value)
{
    node *currentNode = root;
    node *previousNode = NULL;
    while (currentNode->val != value)
    {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    if (currentNode == root)
    {
        node *temp = root;
        root = root->next;
        delete (temp);
    }
    else
    {
        previousNode->next = currentNode->next;
        delete (currentNode);
    }
}

int main()
{
    insert(1);
    insert(6);
    insert(34);
    insert(99);
    insert(2);
    cout << "Before deletion\n";
    print();
    deleteNode(99);
    cout << "After deleting a node\n";
    print();
    return 0;
}