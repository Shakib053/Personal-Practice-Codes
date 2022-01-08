#include <stdio.h>
#include <iostream>
using namespace std;
int stack[100], i, j, choice = 0, n, top = -1;

void show()
{
    if (top == -1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        cout << "Stack is : ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
void push()
{

    if (top == n)
    {
        cout << "stack is full\n";
    }
    else
    {
        int val;
        printf("Enter the value : ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        top--;
    }
}

int main()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d", &n);
    printf("*********Stack operations using array*********");
    while (1)
    {
        int flag = 0;
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            push();
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            show();
        }
        else if (choice == 4)
        {
            printf("Exiting....\n");
            flag = 1;
            break;
        }
        else
        {
            cout << "enter a valid number\n";
        }
        // if (flag == 1)
        //     break;
    }

    return 0;
}
