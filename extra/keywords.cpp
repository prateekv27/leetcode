//macros 
#include <iostream>
using namespace std;

// #define PI 3.14

// int main(){
//     int area = PI *8*8;
//     cout<<area;
// }

//1 Object-like Macro

#define MAX 100
int main(){

    int arr[MAX];
}

//2Function-like Macro

#define SQUARE(x) (x * x)
int main(){
    int a = SQUARE(7);
}

//undef 
#define X 10
int main(){

cout << X;   // 10

#undef X

#define X 20

cout << X;   // 20

}