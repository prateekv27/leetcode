#include <iostream>
using namespace std;

int inc(int &n){
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}


int dec(int &n){
    
    for (int i = 0; i < n; i++){
    
        for (int j = n; j >i; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }


}
            //
int main(){
    int n;
    cin>>n
}