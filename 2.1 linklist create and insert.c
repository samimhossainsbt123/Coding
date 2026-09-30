#include <stdio.h>
#include <stdlib.h>

// node structure তৈরি.........
struct node
{
    int data;
    struct node *next;
};

// global head এবং tail pointer........
struct node* head = NULL;
struct node* tail = NULL;

//  নতুন নোড তৈরি করার সহায়তামূলক ফাংশন
struct node* create_node(int x)
 {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

// insert at tail.....
void insert_at_tail(int x)
 {
    struct node* newnode = create_node(x);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

// insert at head.....
void insert_at_head(int x)
 {
    struct node* newnode = create_node(x);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } 
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

// insert at specific index
void insert(int x, int idx)
 {
    if (head == NULL) 
    {
        insert_at_tail(x);
        return;
    }

    struct node* newnode = create_node(x);
    struct node* tmp = head;

    for (int i = 1; i < idx - 1 && tmp != NULL; i++) 
        {
        tmp = tmp->next;
    }

    if (tmp != NULL) {
        newnode->next = tmp->next;
        tmp->next = newnode;

        // যদি একদম শেষে insert করা হয়, tail আপডেট করার জন্য
        if (newnode->next == NULL) 
            {
            tail = newnode;
        }
    }
}

// display list....

void display()
{
    struct node* tmp = head;
    while (tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
//main function....

int main()
 {
    insert_at_tail(10);
    insert_at_tail(20);
    insert_at_tail(30);
    display();

    insert(15, 2);
    display();

    insert_at_head(5);
    display();

    return 0;
}
