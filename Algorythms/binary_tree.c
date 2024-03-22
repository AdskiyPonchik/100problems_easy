#include <stdio.h>
#include <stdlib.h>

typedef struct binaryTree {
    int data;
    struct binaryTree *left;
    struct binaryTree *right;
} binaryTree;

binaryTree *createNode(int data) {
    binaryTree *newNode = (binaryTree *) malloc(sizeof(binaryTree));
    if (newNode == NULL) {
        printf("Malloc returned NULL\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void push(binaryTree **tree, int data) {
    binaryTree *newNode = createNode(data);
    binaryTree *tmp = *tree;
    if (tmp == NULL) {
        *tree = newNode;
    } else if (data < tmp->data) {
        if (tmp->left == NULL) {
            tmp->left = newNode;
        } else {
            push(&(tmp->left), data);
        }
    } else if (data > tmp->data) {
        if (tmp->right == NULL) {
            tmp->right = newNode;
        } else {
            push(&(tmp->right), data);

        }
    }
}

// recursively
void printInDepthRecursively(binaryTree *tree) {
    if (tree == NULL) {
        return;
    } else {
        printf("%d ", tree->data);
        if (tree->left != NULL) {
            printInDepthRecursively(tree->left);
        }
        if (tree->right != NULL) {
            printInDepthRecursively(tree->right);
        }
    }
}

void printSorted(binaryTree* root)
{
    if(root!= NULL)
    {
        printSorted(root->left);
        printf("%d ", root->data);
        printSorted(root->right);
    }
}

int main() {
    binaryTree *tree = NULL;
    push(&tree, 8);
    push(&tree, 2);
    push(&tree, 9);
    push(&tree, 4);
    push(&tree, 1);
    push(&tree, 3);
    push(&tree, 7);
    printInDepthRecursively(tree);
    printf("\n");
    printSorted(tree);
    return 0;
}