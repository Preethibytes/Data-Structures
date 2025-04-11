#include<stdio.h>
#include<stdlib.h>

// Define the node structure for the singly linked list
struct Node
 {
    int val;
    struct Node* next;
};

// Function to create a new node with a given value
struct Node* createNode(int val)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at a given position (0-indexed)
void insert(struct Node** head, int val, int pos)
 {
    struct Node* newNode = createNode(val);
    if (pos == 0) 
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    struct Node* current = *head;
    for (int i = 0; i < pos - 1; i++) 
    {
        if (current == NULL) return; // Out of bounds
        current = current->next;
    }
    
    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete a node at a given position (0-indexed)
void delete(struct Node** head, int pos)
 {
    if (*head == NULL) return; // Empty list
    
    struct Node* temp = *head;
    if (pos == 0) 
    {
        *head = temp->next;  // Move the head pointer
        free(temp);
        return;
    }
    
    struct Node* prev = NULL;
    for (int i = 0; i < pos; i++) 
    {
        if (temp == NULL) return; // Out of bounds
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return; // Position is out of bounds
    
    prev->next = temp->next;  // Bypass the node to be deleted
    free(temp);
}

// Function to traverse the list and print the values
void traverse(struct Node* head) 
{
    struct Node* current = head;
    if (current == NULL) 
    {
        printf("\n");
        return;
    }
    
    while (current != NULL) 
    {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

// Function to process the test cases
void processTestCases(int t)
 {
    while (t--) 
    {
        int n, q;
        scanf("%d", &n); // Number of nodes
        
        struct Node* head = NULL;
        
        // Create the initial linked list
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            insert(&head, val, i); // Insert each node at the end
        }
        
        scanf("%d", &q); // Number of operations
        
        // Process each operation
        for (int i = 0; i < q; i++)
        {
            char op[10];
            scanf("%s", op);
            
            if (op[0] == 'i') 
            { // "insert" operation
                int x, pos;
                scanf("%d %d", &x, &pos);
                insert(&head, x, pos);
            }
            else if (op[0] == 'd') 
            { // "delete" operation
                int pos;
                scanf("%d", &pos);
                delete(&head, pos);
            }
            else if (op[0] == 't')
            { // "traverse" operation
                traverse(head);
            }
        }
    }
}

void main()
 {
    int t;
    scanf("%d", &t); // Read the number of test cases
    
    processTestCases(t); // Process each test case

    
}
