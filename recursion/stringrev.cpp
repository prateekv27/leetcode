#include <iostream>
using namespace std;

// void rev(int i , string &s){
//     if(i>s.length()/2){
//         return ;
//     }

//     swap(s[i],s[s.length()-i-1]);
//     rev(i+1,s);


// }

// int main(){
//     string r = "abcdef";
//     rev(0,r);
//     cout<<r;

    
// }


//check palindrome


bool checkpal(string s , int i , int j){
    if (i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }

    return checkpal(s , i+1, j-1);
    

}

int main(){
    string r = "racecar";
    checkpal(r , 0 , r.length()-1);
    if(checkpal){
        cout<<true;
    }
    else{
        cout<<false;
    }
    

    
}

