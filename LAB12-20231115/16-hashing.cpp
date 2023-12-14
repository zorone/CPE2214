#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Test 1
/*
int hvalue(string st) {
    int total = 0;
    for(int i = 0; st[i] != '\0' ;i++) {
        // cout<<st[i]<<" = "<<(int)st[i]<<endl;   ใช้งานได้ไม่ถูกต้อง
        total = total+(int)st[i];
    }
    return total;
}

int hashf(string st, int tableSize) {
    int index = -1;
    index = hvalue(st);
    index = index%tableSize;
    return index;
}

int main(int argc, const char *argv[]) {
    cout<<"H value = "<<hvalue("as")<<endl;
    cout<<"Hash = "<<hashf("as", 13)<<endl;     // 13 is Table size
}
*/


// Test 2

class hashing{
    vector<string> hashTable;
    int tableSize;
    int hash(string st);
public:
    hashing(int maxSize);
    void insert(string st);
// void insertOpen(string st);
    void showHashTable(void);
// int search(string st);
};
hashing::hashing(int maxSize){
    hashTable.resize(maxSize);
    tableSize = maxSize;
    for(int i = 0;i<maxSize;i++){
        hashTable[i] = "";
    }
}
int hashing::hash(string st){
    int i = 0;
    int hashValue = 0;
    while(st[i]!='\0'){
        // cout<<"st["<<i<<"] = "<int(st[i])<<endl;
        hashValue = hashValue+(int)st[i];
        // hashValue = (hashValue<<5)+st[i];
        i++;
    }
    return hashValue%tableSize;
}
void hashing::insert(string st){
    int index = 0, i = 0;
    index = hash(st);
    hashTable[index] = st;
}

void hashing::showHashTable(){
    for(int i = 0;i<tableSize;i++){
        cout<<i<<" = "<<hashTable[i]<<endl;
    }
}

/*
int hashing::search(string st){
    int index = -1;
    index = hash(st);
    return index;
}
*/

int main(void){
    class hashing h1(101);
    h1.insert("abcd");
    h1.insert("defg");
    h1.insert("engineering");
    h1.showHashTable();
    //cout<<"search = "<<h1.search("worrawut")<<endl;
    return 0;
}