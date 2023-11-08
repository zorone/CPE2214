#include <iostream>

using namespace std;

typedef struct binaryNode *pbinaryTree;

struct binaryNode{
    int data;
    pbinaryTree leftChild;
    pbinaryTree rightChild;
};

class binarySearchTree{
    pbinaryTree pRoot;
    
    public:
        binarySearchTree(int data);
        void insert(int data1); //use overload for pRoot
        void insert(int data, pbinaryTree pRootSub); // user overload for recursive
        void showTree(void); // for pRoot
        void showTree(pbinaryTree pRootSub); // for recursive
        int search(int data);
        int search(int data, pbinaryTree pRootSub);
};