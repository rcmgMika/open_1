/*
----- LINKEDLISTS ------
    Linkedlists is a data structure that uses links and pointers to access data. It is a list of structs that are linked together

    Parts of a linkedlist
    1. Node - individual structs that are considered to be elements, and each node has members of that struct
    2. Head - The first node or starting line of nodes
    3. Tail - The last node
    4. -> - arrow operator

    In linkedlist, the struct and its name are treated as a data type that is used as a pointer with a pointer name. In this way, you 
    can organize data without having to mind about the placement. You can place the data that the user provide anywhere as long as it
    is linked to a node.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node_{//same as the one below this
    int value;
    struct node_* susunod;
}note_p;

struct node{
    int value;
    struct node* next;//acts as the placeholder of structs/nodes
};
typedef struct node node_t;

void printList(node_t *head){
    node_t *temp = head;
    while(temp != NULL){
        printf("%d - ", temp->value);
        temp = temp->next;
    }
}

int main(){

    node_t n1, n2, n3;
    node_t *head;
    
    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    //linking them: creation of linked list
    head = &n1;//head of the linkedlist(this has the value of all the nodes because of pointer placeholders)
    n3.next = NULL;
    n2.next = &n3;
    n1.next = &n2;//tail of the linkedlist
    /*
        the representation of this linkedlist is this: n3 -> n2 -> n1
    */
    
    printList(head);

    return 0;
}

/* Drafts

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node_t;


node_t* createNode(){
    int data = 32, counter = 0;
    node_t* node = (node_t*)malloc(sizeof(node_t));
    node->value = data;
    node->next = NULL;//becomes the tail of the last node
    node_t* head = NULL;
    node_t* tail = NULL;
    printf("How many nodes: "); scanf("%d", &counter);
    for(int i = 1; i <= counter; i++){
        node_t* newNode = (node_t*)malloc(sizeof(node_t));
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;//links the current node
            tail = newNode;//the current node becomes the new node that is not linked
        }
    }
    node_t* current = head;
    for(int i = 1; i <= counter; i++){
        printf("Enter node %i: ", i);
        scanf("%d", &current->value);
        current = current->next;
    }
    while(head != NULL){
        printf("%d - ", head->value);
        head = head->next;
    }
    current = head;
    free(node);
    while(current != NULL){
        node_t* next = current->next;
        free(current);
        current = next;
    }
    return head;
}
int main(){
    node_t* p = createNode();
}









#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list using typedef
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to print the linked list from the head
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 1;
    }

    // Create the head node
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter value for node 1: ");
    scanf("%d", &head->data);
    head->next = NULL;

    Node* tail = head;

    // Create and add nodes using user input
    for (int i = 2; i <= n; i++) {
        tail->next = (Node*)malloc(sizeof(Node));
        if (tail->next == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        tail = tail->next;
        printf("Enter value for node %d: ", i);
        scanf("%d", &tail->data);
        tail->next = NULL;
    }

    // Print the linked list
    printf("Linked List values:\n");
    printList(head);

    // Free the allocated memory
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}













#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main(){
   int var = 1, counter = 1, temp = 1;

    
   while(true){
        var = temp;
        while(true){
            FILE *ptr = fopen("C:\\Users\\R. Garcia\\Downloads\\Colesqe.text", "a");
            if(var == 1){
                printf("Counter: %d || Integer Value: %d ||\n", counter, temp);
                fprintf(ptr, "Counter: %d || Integer Value: %d ||\n", counter, temp);
                usleep(1000000);
                break;
            }
            if(var % 2 == 0){
                var = var/2;
            }else{
                var = (var*3)+1;
            }
            counter++;
            fclose(ptr);
        }
        temp++;
        counter = 1;
        break;
   }

  /*
  while(true){
    if(var == 1){
        printf("Sequences: %d", counter);
        break;
    }
    if(var % 2 == 0){
        var = var/2;
    }else{
        var = (var*3)+1;
    }
    printf("counter: %d || var = %d\n", counter, var);
    counter++;
  }







#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} node_t;

node_t* createNode() {
    int counter = 0;
    node_t* head = NULL;
    node_t* tail = NULL;

    printf("How many nodes: ");
    scanf("%d", &counter);

    for (int i = 1; i <= counter; i++) {
        node_t* newNode = (node_t*)malloc(sizeof(node_t));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            // Free already allocated nodes
            node_t* temp = head;
            while (temp != NULL) {
                node_t* next = temp->next;
                free(temp);
                temp = next;
            }
            return NULL;
        }

        newNode->next = NULL; // Initialize the next pointer

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode; // Link the new node to the current list
            tail = newNode;       // Update the tail pointer
        }
    }

    node_t* current = head;
    for (int i = 1; i <= counter; i++) {
        printf("Enter value for node %i: ", i);
        scanf("%d", &current->value);
        current = current->next;
    }

    // Print the linked list
    current = head;
    printf("Linked list values: ");
    while (current != NULL) {
        printf("%d - ", current->value);
        current = current->next;
    }
    printf("\n");

    // Free allocated memory
    current = head;
    while (current != NULL) {
        node_t* next = current->next;
        free(current);
        current = next;
        printf("GHrk");
    }

    return head;
}

int main() {
    createNode();
    return 0;
}





*/