#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n){
        return;
    }
    cout << "Sahil" <<endl;
    f(i+1,n);
}

//Time Complexity = O(n)
//Space Complexity = O(n)

void f1(int i, int n){
    if(i>n){
        return;
    }
    cout << i <<endl;
    f1(i+1,n);
}

void f2(int i, int n){
    if(i<1){
        return;
    }
    cout << i <<endl;
    f2(i-1,n);
}

//Backtracking
void f3(int i, int n){
    if(i<1){
        return;
    }    
    f3(i-1,n);
    cout << i <<endl;
}

void f4(int i, int n){
    if(i>n){
        return;
    }    
    f4(i+1,n);
    cout << i <<endl;
}

int main(){
    int n;
    cin >> n;
    f4(1,n);
    return 0;
}
