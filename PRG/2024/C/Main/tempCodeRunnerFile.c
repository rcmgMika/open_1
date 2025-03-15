#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char *str;
    struct node *next;
    struct node *back;
} node_t;

// node_t setValue(char letter, node_t current_node)
// {

// }

char* convert(char* s, int numRows){
    node_t *head = NULL, *current_node = NULL;
    //char question[] = "PAYPALISHIRING";

    for (int i = 0; i < numRows; i++)
    {
        node_t *node = (node_t *)malloc(sizeof(node_t));
        node->str = malloc(1);
        node->str[0] = '\0';
        node->back = NULL;
        if (head == NULL)
        {
            head = node, current_node = node;
        }
        else
        {
            node->back = current_node;
            current_node->next = node, current_node = node;
        }
        if (i == numRows-1)
        {
            current_node->next = NULL;
        }
    }

    node_t *current = head;
    int down = 0;

    // for (int i = 0; i < strlen(question); i++)
    // {
    //     char assign[2] = {question[i], '\0'};
    //     current->str = realloc(current->str, strlen(assign) + strlen(current->str) + 1);
    //     strcat(current->str, assign);
        
    // }

    printf("Size of string: %d\n", strlen(s));
    while(1){
        while(current != NULL){
            if(down > strlen(s)-1) break;
            char assign[2] = {s[down++], '\0'};
            current->str = realloc(current->str, strlen(assign)+strlen(current->str)+1);
            strcat(current->str, assign);
            current = current->next;
        }
        if(down > strlen(s)-1) break;
        current = current_node->back;
        while(current != NULL){
            if(down > strlen(s)-1) break;
            char assign[2] = {s[down++], '\0'};
            current->str = realloc(current->str, strlen(assign)+strlen(current->str)+1);
            strcat(current->str, assign);
            current = current->back;
        }
        current = head->next;
        if(down > strlen(s)-1) break;
    }

    node_t *thisisit = head;
    for (int i = 0; i < numRows; i++)
    {
        printf("%s ", thisisit->str);
        thisisit = thisisit->next;
    }
}

int main()
{
    convert("A", 1);
}