#include <iostream>

using namespace std;

struct Node{

    int data;
    struct Node *prev;
    struct Node *next;

};

struct Node* head;  // global variable - pointer to head node

//////////////////////////////////////////////////////////////////

void insert(int newData){

    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = newData;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL){
        head->prev = newnode;
    }

    head = newnode;
    
}

//////////////////////////////////////////////////////////////////

void display(){
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL){
        cout<< ptr->data << " ";
        ptr = ptr->next;
    }
}

int main(){

insert(4);
insert(8);
insert(29);
insert(100);

display();

}
