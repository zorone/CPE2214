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

plist ithData(int ith, plist phead){
    plist ptravel;
    ptravel = phead;

    for(int i=1; i<=ith; i++){
        ptravel = ptravel->pnext;
    }

    return ptravel;
}

void deleteIth(int ith, plist phead){
    plist pdelete, pbefore;
    pbefore = ithData(ith-1, phead);
    pdelete = pbefore->pnext;

    pbefore->pnext = pdelete->pnext;
    free(pdelete);
}

void deleteAll(plist phead){
    plist ptemp, ptravel;
    ptravel = phead;
    while(ptravel != NULL){
        ptemp = ptravel;
        ptravel = ptravel->pnext;
        printf("delete %p\n", ptemp);
        free(ptemp);
    }
}