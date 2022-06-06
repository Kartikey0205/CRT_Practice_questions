// STACK USING ARRAY

#include <stdio.h>

int stack[100], i, n, top = -1, choice = 0;
void push();
void pop();
int peek();
void show();

int main()
{
    printf("Enter the number of elements in stack you want to use: ");
    scanf("%d", &n);
    while (choice != 5)
    {
        printf("\n\n****Main Menu****");
        printf("\nChoose one option from the following list ...");
        printf("\n===============================================\n");
        printf("\n1.Push element in stack.\n2.Pop element from stack.\n3.To get the element present at top of stack.\n");
        printf("4.Display elements of stack.\n5.Exit.\n\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("%d", peek());
            break;
        case 4:
            show();
            break;
        case 5:
            printf("Exiting...");
            break;
        default:
            printf("Please enter a valid choice!!");
            break;
        }
    } // end of while loop
    return 0;
} // end of main

void push()
{
    int val;
    printf("Enter the value to be inserted: ");
    scanf("%d", &val);

    if (top == n - 1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top] = val;
        printf("Element successfully inserted.");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        top--;
    }
}

int peek()
{
    return (top > -1) ? stack[top] : -1;
    // return top > -1 ? printf("%d", stack[top]) : printf("%d", -1);
}

void show()
{
    if (top == -1)
    {
        printf("Nothing to show!");
        return;
    }
    printf("Elements in the stack are: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}