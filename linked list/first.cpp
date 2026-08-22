#include <iostream>
using namespace std;
            //creating a linked list
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
//     head = new NODE(28);
//     cout<<head->data<<endl;
//     cout<<head->next<<endl;
// }


            //insertions
class NODE{
    public:
    int data;
    NODE*next;
    NODE(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    NODE*head;
    head = NULL;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0;i<5;i++){
        if(head == NULL){
            head = new NODE(arr[i]);
        }
        else{
            NODE*temp;
            temp = new NODE(arr[i]);
            temp->next = head;
            head = temp;
        }

    } 
    NODE*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}