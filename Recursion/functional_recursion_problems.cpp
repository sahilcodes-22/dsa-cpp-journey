#include <bits/stdc++.h>

using namespace std;

//reverse array using 2 pointer recursion

void reversearr(int l, int a[], int r){
    if(l>=r){
        return;
    }
    swap(a[l], a[r]);
    reversearr(l+1, a, r-1);
}

//reverse array using 2 pointer recursion

void reversearr1(int i, int a[], int n){
    if(i>=n/2){
        return;
    }
    swap(a[i],a[n-i-1]);
    reversearr1(i+1, a, n);
}

//checking string palindrom using functional recursion

bool stringpal(int i, string s){
    if(i>=s.size()){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return stringpal(i+1,s);
}

//Time Complexity = O(n/2)
//Space Complexity = O(n/2)

int main(){
    string str;
    cin >> str;
    cout<<stringpal(0,str);
    return 0;
}
