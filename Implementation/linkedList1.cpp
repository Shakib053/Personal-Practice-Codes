// Linked list insertion and print

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *next;
};

// create a root node which will always hold the address of first node
node *root = NULL;
void insert(int val)
{
    if (root == NULL)
    {
        root = new node();
        root->roll = val;
        root->next = NULL;
    }
    else
    {
        node *currentNode = root;         // make a copy of root node
        while (currentNode->next != NULL) // Find the last node
        {
            currentNode = currentNode->next; // go to next address
        }
        node *newNode = new node(); // create a new node
        newNode->roll = val;
        newNode->next = NULL;
        currentNode->next = newNode;
    }
}
void print()
{
    cout << "numbers in the linked list are: ";
    node *currentNode = root;
    while (currentNode != NULL) //
    {
        cout << currentNode->roll << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
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
    print();
    return 0;
}