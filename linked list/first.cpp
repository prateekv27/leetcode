#include <iostream>
using namespace std;
            //creating a linked list
    class Node{
        public:
        int data;
        Node*next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    };
    int main(){
        Node* n1 = new Node(20);    
        cout<< n1 -> data<<endl;
        cout<< n1 -> next<<endl;

    }


            //insertions
// class NODE{
//     public:
//     int data;
//     NODE*next;
//     NODE(int value){
//         data = value;
//         next = NULL;
//     }
// };

// int main(){
//     NODE*head;
//     head = NULL;
//     int arr[5] = {1,2,3,4,5};
//     for(int i = 0;i<5;i++){
//         if(head == NULL){
//             head = new NODE(arr[i]);
//         }
//         else{
//             NODE*temp;
//             temp = new NODE(arr[i]);
//             temp->next = head;
//             head = temp;
//         }

//     } 
//     NODE*temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
// }