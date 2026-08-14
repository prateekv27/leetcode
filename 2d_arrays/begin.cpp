#include <iostream>
using namespace std;
void printcol(int arr[][4] , int row, int col){
    for(int i =0;i<row;i++)
    for(int j =0;j<col;j++)
    cout<<arr[i][j];
       
}

        //search element
int main(){
    int arr[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x = 11;
    for(int i =0;i<5;i++)
    for(int j =0;j<4;j++)
    if(arr[i][j]==x){
        cout<<"yess";
        return 0;
    }
    cout<<"no";
}