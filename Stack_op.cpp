#include <stdio.h>
#include <stdlib.h>

int *st, top = -1, MAX;

void push(int val)
{
    if (top == MAX - 1)
        printf("\nSTACK OVERFLOW");
    else
        st[++top] = val;
}

int pop()
{
    return (top == -1) ? printf("\nSTACK UNDERFLOW"), -1 : st[top--];
}

int peek()
{
    return (top == -1) ? printf("\nSTACK IS EMPTY"), -1 : st[top];
}

void display()
{
    if (top == -1)
        printf("\nSTACK IS EMPTY");
    else
        for (int i = top; i >= 0; i--)
            printf("\n%d", st[i]);
}

int main()
{
    int val, option;

    printf("Enter the size of the stack: ");
    scanf("%d", &MAX);
    st = (int *)malloc(MAX * sizeof(int));
    if (st == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    do
    {
        printf("\n*****MAIN MENU*****\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\nEnter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the number to push: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            if ((val = pop()) != -1)
                printf("Popped: %d", val);
            break;
        case 3:
            if ((val = peek()) != -1)
                printf("Top: %d", val);
            break;
        case 4:
            display();
            break;
        }
    } while (option != 5);

    free(st); // Free allocated memory
    return 0;
}
