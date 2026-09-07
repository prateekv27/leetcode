#include <iostream>
#include <vector>
using namespace std;


void update1(int n){
    n++;

}
void update2(int &n){
    n++;
}

int main(){
    int n;
    cin>>n;
    cout<<"before"<<n<<endl;
    update1(n);
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
}