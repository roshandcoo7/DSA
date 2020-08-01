#include <iostream>

using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;  
    
        Node(){
            key = 0;
            data = 0;
            next = NULL;
        }

        Node(int k,int d){
            key = k;
            data = d;
        }   
};

class SinglyLinkedList{
    public:
        Node* head;

        SinglyLinkedList(){
            head = NULL;
        }

        SinglyLinkedList(Node *n)
        {
            head = n; // adress of head
        }

        // To check if a node exists using k 

        Node* nodeExists(int k){

            Node* temp = NULL;
            Node* ptr = head;

            while(ptr != NULL){

                if(ptr->key==k){
                   temp = ptr; 
                }

                ptr = ptr->next;
            }

            return temp;
        }

        void appendNode(Node *n){
            if(nodeExists(n->key)!=NULL){
                cout << "Node alredy exists" << endl;
            }

            else{
                if(head==NULL){
                    head = n;
                    cout << "Node appended" << endl;
                }

                else{
                    Node* ptr = head;
                    while(ptr->next!=NULL){
                        ptr = ptr->next;
                    }

                    ptr->next = n;
                    cout << "Node appended" << endl;
                }
            }
        }


        void prependNode(Node *n){
            if(nodeExists(n->key)!=NULL){
                cout << "Node alredy exists" << endl;
            }

            else{
                if(head==NULL){
                    head = n;
                    cout << "Node prepended" << endl;
                }

                else{
                    n->next = head;
                    head = n;
                    cout << "Node prepended" << endl;
                }
            }
        }

        void InsertNode(int k,Node *n){

            Node* ptr = nodeExists(k);
            if(ptr==NULL){
                cout << " Node doesnt exist" << endl;
            }

            else{
                if(nodeExists(n->key!=NULL)){
                    cout << "current key alreyd exists" << endl;
                }

                else{
                    n->next = ptr->next;
                    ptr->next = n;
                }
            }

        }

        void printList(){
            if(head==NULL){
                cout << "there's nothing to print" << endl;
            }

            else{
                cout << "list contains : ";
                Node* temp = head;

                while(temp!=NULL){
                    cout << "(" << temp->key << "," << temp->data << ")-->";
                    temp = temp->next;
                }
            }
        }

        void reverseList(){
            Node *current,*next,*prev;
            current = head;
            prev = NULL;

            while(current != NULL)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }

            head = prev;
        }

};

int main(){

    SinglyLinkedList s;

    // cout << "Enter Key : ";
    // cin >> key1;

    // cout << "Enter data : ";
    // cin >> data1;
    Node* n1 = new Node();
    n1->key = 0;
    n1->data = 1;
    s.appendNode(n1);

    Node* n2 = new Node();
    n2->key = 1;
    n2->data = 2;
    s.appendNode(n2);

    Node* n3 = new Node();
    n3->key = 2;
    n3->data =3;
    s.appendNode(n3);

    Node* n4 = new Node();
    n4->key = 3;
    n4->data =4;
    s.appendNode(n4);

    Node* n5 = new Node();
    n5->key = 4;
    n5->data =5;
    s.appendNode(n5);
    s.printList();
    s.reverseList();
    s.printList();
}