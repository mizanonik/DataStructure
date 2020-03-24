#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;

    free(temp);
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL;
    int choice;


    do{
        cout << "1) Insert an Element: " << endl;
        cout << "2) Delete an Element: " << endl;
        cin >> choice;
        switch(choice){
            case 1:{
                int element;
                cout << "Enter the element: ";
                cin >> element;
                push(&head, element);
                cout << "Created Linked List: " << endl;
                printList(head);
                break;
            }
            case 2:{
                int nodeToDelete;
                if(head == NULL){
                    cout << "Linked list is empty." << endl;
                }
                else{
                    cout << "Enter the element you want to delete:";
                    cin >> nodeToDelete;
                    deleteNode(&head, nodeToDelete);
                    cout << "Linked List after Deletion of " <<nodeToDelete<< " : " << endl;
                    printList(head);
                }
                break;
            }
        }
    }while(choice==1 || choice ==2);

    return 0;
}
