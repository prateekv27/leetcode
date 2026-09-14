#include <iostream>
using namespace std;

void rev(int i , string &s){
    if(i>s.length()/2){
        return ;
    }

    swap(s[i],s[s.length()-i-1]);
    rev(i+1,s);


}

int main(){
    string r = "abcdef";
    rev(0,r);
    cout<<r;

    
}