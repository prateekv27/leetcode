#include <iostream>
using namespace std;
            //creating a linked list
    // class Node{
    //     public:
    //     int data;
    //     Node*next;
    //     Node(int data){
    //         this -> data = data;
    //         this -> next = NULL;
    //     }
    // };
    // int main(){
    //     Node* n1 = new Node(20);    
    //     cout<< n1 -> data<<endl;
    //     cout<< n1 -> next<<endl;

    // }


            //insertions
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }

};
void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* n1 = new Node(10);
    cout<< n1 -> data<<endl;
    cout<< n1 -> next<<endl;

    Node* head = n1;
    insertathead(head , 50);
    print(head);


}