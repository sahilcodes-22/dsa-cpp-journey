#include<bits/stdc++.h>
using namespace std;

//Recursion - when a function calls itself until a specified conditon is met 

//Base Conditon - the condition used to stop a recursion 

//stack overflow/stackspace - yet to be completed functions are stored in the stackspace and when the stack exceeds its available space due to infinite recursion its called a stack overflow

//Recursion Tree - representing how the functions are calling themselves in simplier way during dry run 

int cnt = 0;
void f(){
    if(cnt==4){ //base condition
        return;
    }
    cout << cnt << endl;
    cnt ++;
    f(); //calling itself
}

int main(){
    f();
    return 0;
}
