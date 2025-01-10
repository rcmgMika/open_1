/*
A hash table is a data structure that has nodes, and each of those nodes must have different outputs and the same nodes must have the same output.
The output of these nodes are their position inside the hash table, or their index. These indexes will be the key, just like in dictionaries, that
will output the values of that node.



*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TABLE 10
#define MAX_INDEX 256

typedef struct{
    int value;
    char name[MAX_INDEX];
}person;

person* hashTable[MAX_TABLE];
person* hashTable_2[MAX_TABLE];

unsigned int hash(char* name){
    int length = strnlen(name, MAX_INDEX);
    unsigned int temp;
    for(int i = 0; i < length; i++){
        temp+=name[i];
        temp = (temp * name[i]) % MAX_TABLE;
    }
    return temp;
}

void emptyHash(){
    for(int i = 0; i < MAX_TABLE; i++){
        hashTable[i] == NULL;
        hashTable_2[i] == NULL;
    }
}

void searchHash(){
    for(int i = 0; i < MAX_TABLE; i++){
        if(hashTable[i] == NULL){
            printf("%i \t----\n", i);
        }else{
            printf("%i \t%s\n", i, hashTable[i]->name);
        }
    }
}

bool init_hash(person* x){
    if(x == NULL) return false;
    int index = hash(x->name);

    if(hashTable[index] != NULL){
        return false;
    }
    hashTable[index] = x;
    return true;
}

person* hash_lookup_1(char* name){
    int index = hash(name);
    if(hashTable[index] != NULL && !strncmp(name, hashTable[index]->name, MAX_INDEX) == 1){
        return hashTable[index];
    }else{
        return NULL;
    }
}

bool hash_lookup_2(char* name){
    int index = hash(name);
    if(hashTable[index] != NULL && !strncmp(name, hashTable[index]->name, MAX_INDEX) == 0){
        printf("==> Error. No keys found.\n");
        return false;
    }else if(hashTable[index] != NULL){
        printf("==> %s", hashTable[index]->name);
        return true;
    }
    printf("==> Not found.");
     return false;
}

person*  remove_hash(char* name){
    int index = hash(name);
    if(hashTable[index]!= NULL && !strncmp(name, hashTable[index]->name, MAX_INDEX) == 1){
        person* tmp = hashTable[index];
        hashTable[index] = NULL;
        return tmp;
    }else{
        return NULL;
    }
}

void cmp_time(){
    printf("\n==?Compile time: %s at %s\n", __DATE__, __TIME__);
    
}


//open addressing : linear probbing

bool insert_hash(person* x){
    int index = hash(x->name);
    for(int i = 0; i < MAX_TABLE; i++){
        int try = i + index % MAX_TABLE;
        if(hashTable[try] == NULL){
            hashTable[try] = x;
            return true;
        }
    }
    return false;
}

bool insert_hash2(person* x){
    int index = hash(x->name);
    if(hashTable[index] == NULL){
        hashTable[index] = x;
        return true;
    }else{
        hashTable_2[index] = x;
    }
    printf("==> value inserted in table 1\n");
    return false;
}

void search_me(int x){
    switch(x){
        case 1:
            for(int i = 0; i < MAX_TABLE; i++){
                if(hashTable[i] == NULL){
                    printf("%i\t----\n",i );
                }else{
                    printf("%i\t%s\n", i, hashTable[i]->name);
                }
            }
            break;
        case 2:
            for(int i = 0; i < MAX_TABLE; i++){
                if(hashTable_2[i] == NULL){
                    printf("%i\t----\n",i );
                }else{
                    printf("%i\t%s\n", i, hashTable_2[i]->name);
                }
            }
            break;
        default:
            break;
    }
}

int main(){

    emptyHash();

    person Robby = {.name="Robby",.value=18};
    person Mika = {.name="Mika", .value=14};
    person Another = {.name="Mika", .value=14};
    person bakit = {.name="Mika", .value=14};
    person Akim = {.name="Akim", .value=18};

    //init_hash(&Robby);
    //insert_hash(&Mika);
    //init_hash(&Akim);
    insert_hash2(&Another);
    insert_hash2(&Robby);
    insert_hash2(&Mika);
    insert_hash2(&Akim);
    insert_hash2(&bakit);




    search_me(2);

    cmp_time();
    return 0;
}