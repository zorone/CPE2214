#include<stdio.h>
#include<stdlib.h>

typedef struct listNode *plist;
struct listNode{
    int data;
    plist pnext; //เก็บ Adress ของโหนด list ตัวถัดไป
};

plist createNode(void);

plist createNode(void){
    plist pnew;
    pnew = (plist)malloc(sizeof(struct listNode));
    pnew->data = 0;
    pnew->pnext = NULL;

    return pnew;
}

int main(int argc, char* argv[]){

}