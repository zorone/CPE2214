#include<stdio.h>
#include<stdlib.h>

typedef struct listNode *plist;
struct listNode{
    int data;
    plist pnext; //เก็บ Adress ของโหนด list ตัวถัดไป
};

plist createNode(void);
plist addData(int data, plist phead);
void travelList(plist phead);

int main(int argc, char* argv[]){
    plist phead;
    phead = createNode();
    addData(5, phead);
    addData(10, phead);
    addData(29, phead);
    addData(18, phead);
    addData(3, phead);
    travelList(phead);
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

void travelList(plist phead){
    plist ptravel;
    ptravel = phead;

    while(ptravel != NULL){
        printf("%p | %d | %p\n", ptravel, ptravel->data, ptravel->pnext);

        ptravel = ptravel->pnext;
    }
}
