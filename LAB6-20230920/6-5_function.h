#pragma once

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
plist ithData(int ith, plist phead);
void deleteIth(int ith, plist phead);
void deleteAll(plist phead);