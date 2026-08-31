// 20. Write a program to perform binary tree traversals.

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int value;
    struct Node *left, *right;
};

struct Node* newNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* insertNode(struct Node* root, int value) {
    if(root == NULL) {
        return newNode(value);
    }
    if(value < root->value) {
        root->left = insertNode(root->left, value);
    } else if(value > root->value) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// inOrder
void inOrder(struct Node* root) {
    if(root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->value);
    inOrder(root->right);
}

//preOrder
void preOrder(struct Node* root ) {
    if(root == NULL) return;
    printf("%d ", root->value);
    preOrder(root->left);
    preOrder(root->right);
}
//postOrder
void postOrder(struct Node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->value);
}
 int main() {
     struct Node* root = NULL;
    int n, val;
 
    printf("Enter number of nodes: ");
    scanf("%d", &n);
 
    printf("Enter %d values to insert into the binary search tree: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insertNode(root, val);
    }
 
    printf("\ninOrder traversal (Left, Root, Right):   ");
    inOrder(root);
    
    printf("\nPreorder traversal (Root, Left, Right):  ");
    preOrder(root);
 
    printf("\nPostorder traversal (Left, Right, Root): ");
    postOrder(root);

    return 0;
 }