#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int searchElement(int element, Node* n){
    int countNode = 0;
    bool isFound = false;
    while(n != NULL){
        countNode++;
        if(n->data == element){
            isFound = true;
            break;
        }
        n = n->next;
    }
    if(isFound){
        return countNode;
    }
    return -1;
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    int searchResult = searchElement(3, head);

    if(searchResult == -1){
        cout << "Element is not found is the list. " << endl;
    }
    else{
        cout << "Element found at node " << searchResult << endl;;
    }

    return 0;
}
