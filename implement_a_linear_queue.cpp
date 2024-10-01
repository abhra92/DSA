#include <stdio.h>

#define max 5

int queue[max];
int front = -1, rear = -1;

void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main()
{
    int option, val;
    do
    {
        printf("\n\n ***MAIN MENU***");
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. Peek");
        printf("\n 4. Display the Queue");
        printf("\n 5. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            val = delete_element();
            if (val != -1)
                printf("\n The number deleted is : %d", val);
            break;
        case 3:
            val = peek();
            if (val != -1)
                printf("\n The first value in queue is : %d", val);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\n Exiting...");
            break;
        default:
            printf("\n Invalid option! Please enter a number between 1 and 5.");
            break;
        }
    } while (option != 5);

    return 0;
}

void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);
    if (rear == max - 1)
    {
        printf("\n OVERFLOW");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else
    {
        rear++;
        queue[rear] = num;
    }
}

int delete_element()
{
    int val;
    if (front == -1 || front > rear)
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;
        return val;
    }
}

int peek()
{
    if (front == -1 || front > rear)
    {
        printf("\n QUEUE IS EMPTY");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    int i;
    printf("\n");
    if (front == -1 || front > rear)
    {
        printf("\n QUEUE IS EMPTY");
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("\t %d", queue[i]);
    }
    printf("\n");
}