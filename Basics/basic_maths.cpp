#include <bits/stdc++.h>
using namespace std;

//Basic Maths Concepts

//Extracting Digits
//let num = 7789
//to get the last digit we can do = 7789%10 = 9
//then we can do 7789/10 = 778
//then we can repeat this process until num = 0 and we will get all the digits in the reverse order

void digits(int n){
    while(n>0){
        int d = n%10;
        cout<<d<<endl;
        n = n/10;
    }
}

int countdigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
}

//the time complexity = log10(n) as its getting divided by 10, n times
//REMEMBER - if there is division happening by x num we say logx(n) is the time complexity

//another way - using log10(n)+1

int countdigits1(int n){
    int count = log10(n)+1;
    return count;
}

int reverse(int n){
    int rev = 0;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n=n/10;
    }
    return rev;
}

//palindrom is basically if the reverse of a number = the number
bool palindrom(int n){
    int rev = 0;
    int onum = n;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n=n/10;
    }
    return rev==onum;
}

//armstrong number is a number where the sum of its digits raised to the power of the number of digits equals the number itself
bool armstrong(int n){
    int count = log10(n)+1;
    int sum = 0;
    int onum = n;
    while(n>0){
        int ld = n%10;
        sum = sum + pow(ld,count);
        n=n/10;
    }
    return sum==onum;
}

void printdivisors(int n){
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}

//sqrt(n) method
// i<=sqrt(n) = i*i<= n
void printdivisors1(int n){
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<endl;
            if((n/i)!=i){
                cout<<(n/i)<<endl;
            }
        }
    }
}

//sqrt(n) method + using vectors to sort
void printdivisors2(int n){
    //O(sqrt(n))
    vector<int>ls;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
               ls.push_back(n/i);
            }
        }       
    }
    //O(nlogn) n = no of factors
    sort(ls.begin(),ls.end());
    //O(n) = n = no of factors
    for(auto it : ls){
        cout<<it<<endl;
    }
}

//prime = a number that has exactly 2 factors - 1 and itself
bool checkprime(int n){
    int count =0;
    for(int i = 1; i * i <= n; i++){
        if((n%i)==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    return count==2;
}

int gcd(int n1, int n2){
    for(int i = min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){
            return i; //once return is used you dont need to use break, it exits the function immediately and sends the value back to the caller.
        }
    }
    return 1; //1 is always a gcd
}

//using Euclidean Algorithm
//Euclidean Algorithm states - gcd(a,b) = gcd(a-b,b) where a>b
//apply Euclidean Algorithm, make the numbers smaller, until one of them gets 0, if one of them is 0, the other one is the gcd
//we can direcly go to the last set of number when one of them is 0 by (a%b,b)
//so Euclidean Algorithm can be written as gcd(a,b) = gcd(a%b,b)
int gcd1(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    else{
        return n1;
    }

    //Time Complexity = O(log phi(min(a,b)))
}

int main(){
    int n1, n2;
    cin>>n1 >> n2;
    cout << gcd1(n1,n2);
    return 0;
}
