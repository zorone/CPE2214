#include<stdio.h>
#include<stdlib.h>

typedef struct listNode *plist;
struct listNode{
    int data;
    plist pnext; //เก็บ Adress ของโหนด list ตัวถัดไป
};

plist createNode(void);
plist addData(int data, plist phead);

int main(int argc, char* argv[]){
    plist phead;
    phead = createNode();
    printf("%p | %d | %p\n", phead, phead->data, phead->pnext);
    return 0;
}

plist createNode(void){
    plist pnew;
    pnew = (plist)malloc(sizeof(struct listNode));
    pnew->data = 0;
    pnew->pnext = NULL;

    return pnew;
}

plist addData(int data, plist phead){
    plist pnew;
    pnew = createNode();
    
    if(pnew != NULL){
    pnew->data = data;
    pnew->pnext = phead->pnext;
    phead->pnext = pnew;
    }
    return pnew;
}