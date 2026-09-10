#include <iostream>
using namespace std;

bool isSorted(int *arr , int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool t = isSorted( arr+1, n-1);
    return t;


    
}

int main(){
    int arr[5];
    int n = 5;
    for (int i = 0;i<5;i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr , n);

}