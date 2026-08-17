#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int>>matrix(row, vector<int>(col));
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
     
    //waveform

    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i = 0;i<row;i++){
                cout<<matrix[i][j];
            }
        }
        else{
            for(int i = row-1;i>=0;i--){
                cout<<matrix[i][j];
            }
        }
    }




}

