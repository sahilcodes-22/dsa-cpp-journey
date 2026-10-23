#include <bits/stdc++.h>
using namespace std;

//Parameterised Way
void f(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    f(i-1, sum+i);
}

//Functional Way
int f1(int n){
    if(n==0){
        return 0;
    }
    return n + f1(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

//Time Complexity = O(n)
//Space Complexity = O(n)

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
