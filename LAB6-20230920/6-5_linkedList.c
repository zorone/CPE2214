#include "6-5_function.h"

int main(int argc, char* argv[]){
    plist phead;
    plist ptemp;
    phead = createNode();
    addData(5, phead);
    addData(10, phead);
    addData(29, phead);
    addData(18, phead);
    addData(3, phead);
    travelList(phead);
    ptemp = ithData(4, phead);
    printf("From ptemp %d th position = %p data = %d\n", 4, ptemp, ptemp->data);

    deleteIth(4, phead);
    travelList(phead);

    deleteAll(phead);
    return 0;
}
