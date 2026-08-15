#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
    for(int i = 0;i<n-1;i++){
        int a = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[a]){
                a = j;
            }
        }
        swap(arr[a],arr[i]);
    }
}