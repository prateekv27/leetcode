#include <iostream>
using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout<<ptr<<endl;
    
//     //derefrencing
//     cout<<*(ptr)<<endl;

//     int** q = &ptr;
//     cout<< *(q)<<endl;
//     cout<<**(q)<<endl;



// }

//PASS BY REFERNECE
void changeA(int* ptr){
    *ptr = 20;//derefrencing to change
}

int main(){
    int a = 10;
    changeA(&a);
    cout<<a<<endl;
}
