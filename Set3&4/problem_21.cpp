#include <iostream>
#include <stdlib.h>

using namespace std;

int indexcount = 0;

struct node
{
    int index;
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->index = indexcount;
    temp->key = item;
    temp->left = temp->right = NULL;
    indexcount++;
    return temp;
}

struct node* insertElement(struct node* node, int key)
{
    if (node == NULL) return newNode(key);

    if (key < node->key)
        node->left  = insertElement(node->left, key);
    else if (key > node->key)
        node->right = insertElement(node->right, key);

    return node;
}

struct node* searchElement(struct node* root, int key)
{
    if (root == NULL || root->key == key)
       return root;

    if (root->key < key)
       return searchElement(root->right, key);

    return searchElement(root->left, key);
}

int main()
{
    int noOfElements;
    struct node* root = NULL;
    cout << "Enter number of elements: ";
    cin >> noOfElements;

    for(int i= 0; i<noOfElements; i++){
        int element;
        cout << "Enter element no " << i+1 << ": ";
        cin >> element;
        if(i == 0){
            root = insertElement(root, element);
        }
        else{
            insertElement(root, element);
        }
    }

    int elementToSearch;
    cout << "Enter the element you want to search: ";
    cin >> elementToSearch;

    struct node* searchedElementNode = NULL;
    searchedElementNode = searchElement(root, elementToSearch);

    if(searchedElementNode == NULL){
        cout << "Searched element is not found." << endl;
    }
    else{
        cout << "Your searched element is found at index: " << searchedElementNode->index;
    }

    return 0;
}
