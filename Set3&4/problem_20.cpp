#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);

    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << endl;
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->key << endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << endl;
    }
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
            root = insert(root, element);
        }
        else{
            insert(root, element);
        }
    }

    cout << "InOrder:"  << endl;
    inorder(root);

    cout << "PreOrder:"  << endl;
    preorder(root);

    cout << "PostOrder:"  << endl;
    postorder(root);

    return 0;
}
