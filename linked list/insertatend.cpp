#include <iostream>
using namespace std;
            //creating a linked list
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
    NODE*head,*tail;
    tail=head = NULL;
    int arr[5] = {1,2,3,4,5};
    
    for(int i = 0;i<5;i++){
        if(head==NULL){

            head =  new NODE(arr[i]);
            tail = head;

    }
    else{
        tail -> next = new NODE(arr[i]);
        tail =  tail->next;
        
    }
    }
    NODE*temp;
    temp = head;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }




}