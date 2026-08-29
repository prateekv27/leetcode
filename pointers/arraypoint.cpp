#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,5,6};
    //array is a constant pointer
    int b = *arr;
    cout<<b<<endl;//prints 1st elemnt
    //arithmetic pointers
    cout<<(b+1)<<endl;
    cout<<(b+2)<<endl;
    cout<<(b+3)<<endl;
    cout<<(b+4)<<endl;
   
}
