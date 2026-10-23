#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

//Multiple Recursion Calls;

int fibo1(int n){
    if(n<=1){
        return n;
    }
    int last = fibo1(n-1); //this will run first, then come back then the code will continue
    int slast = fibo1(n-2);
    return last+slast;
}

//Time Complexity = O(2^n)

int main(){
    int n;
    cin>>n;
    cout<<fibo1(n);
}
