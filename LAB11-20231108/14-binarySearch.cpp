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
        void insert(int data, pbinaryTree pRootSub); // use overload for recursive
        void showTree(void); // for pRoot
        void showTree(pbinaryTree pRootSub); // for recursive
        int search(int data);
        int search(int data, pbinaryTree pRootSub);
};

binarySearchTree::binarySearchTree(int data){
    pRoot = new struct binaryNode;
    pRoot->data = data;
    pRoot->leftChild = NULL;
    pRoot->rightChild = NULL;
}

void binarySearchTree::insert(int data1){
    pbinaryTree ptemp;
    if(data1 < pRoot->data){
        if(pRoot->leftChild == NULL){
            ptemp = new struct binaryNode;
            ptemp->data = data1;
            pRoot->leftChild = ptemp;
        }
        else{
            insert(data1, pRoot->leftChild);
        }
    }
}

void binarySearchTree::insert(int data, pbinaryTree pRootSub){
    pbinaryTree ptemp;
    if(data < pRootSub->data){
        if(pRootSub->leftChild == NULL){
            ptemp = new struct binaryNode;
            ptemp->data = data;
            pRootSub->leftChild = ptemp;
        }
        else{
            insert(data, pRootSub->leftChild);
        }
    }
    else if(data > pRootSub->data){
        if(pRootSub->rightChild == NULL){
            ptemp = new struct binaryNode;
            ptemp->data = data;
            pRootSub->rightChild = ptemp;
        }
        else{
            insert(data, pRootSub->rightChild);
        }
    }
    else{
        cout << "data already exist in the binary tree" << endl;
    }
}

void binarySearchTree::showTree(pbinaryTree pRootSub){

    cout << pRootSub << "|" << pRootSub->data << pRootSub->leftChild << "|" << pRootSub->rightChild << endl;
}