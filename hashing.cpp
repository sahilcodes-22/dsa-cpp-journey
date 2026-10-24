#include <bits/stdc++.h>

using namespace std;

//Problem - When counting the frequency of each element by repeatedly traversing an array of (n) elements, the time complexity can become high, potentially reaching O(n^2).

//Thats where hashing comes in

//Hashing - prestoring and fetching

//prestoring - creating another array like hash[n], where n = no of elements for remembering the frequency of each element, initally set to 0

//fetching - the frequencies can be later fetch with hash[i], where i is the desired element, the time complexity for fetching turns out to be O(1)

int main(){
    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0;i<n;i++){
    //     cin>>a[i];
    // }

    // //precompute
    // int hash[13] = {0};
    // for(int i =0;i<n;i++){
    //     hash[a[i]] +=1;
    // }

    // //query
    // int q;
    // cin>>q;
    // while(q--){   //shorthand to execute loop exactly q times
    //     int n;
    //     int number;
    //     cin>>number;
    //     //fetch
    //     cout<<hash[number]<<endl;
    // }

//Problem - now for elements till 12 we created a hashmap of 13, but when the no of elements is large like 10^9 we can't do [10^9+1] as max size an array can go is [10^6] (int)

//we can get [10^7] if we declare the array globally

//(if array is declared globally we dont have to assign 0; its already preassinged)

//Char Hashing

//always use array for hashing as char only has 256 chars

//for lower case u can do 26 size hash and for hash[s[i]-'a']

//here s[i] auto cast into interger as hash[] needs and index which is int
    // string s;
    // cin>>s;

    // //precompute
    // int hash[256]={0};
    // for(int i =0; i <s.size(); i++){
    //     hash[s[i]]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     //fetch
    //     cout<<hash[c]<<endl;
    // }

//Fix to the problem of array size being 10^7 only - We can use Maps/Unordered Maps

//Key concept - in maps we take the number as the key and the frequency as the value

    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i<n ; i++){
    //     cin>>a[i];
    // }

    // //precompute
    // map <int,int> mpp;
    // for(int i =0; i<n;i++){
    //     mpp[a[i]]++;
    // }

    // //iterate in the map
    // for(auto it: mpp){
    //     cout<< it.first << "->" << it.second << endl;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     //fetch
    //     cout<<mpp[number]<<endl;
    // }

    //similarly can be done for char hashing using map<char,int> mpp

    //Time Complexity - storing and fetching both takes log(n) in all cases(worst,average and best)

    //Unordered Map - time complexity = storing and fetching both takes O(1) (average and best) worst case take O(n)

    //Therefore first preference must be unordered maps

    //How Hashing Works - Division Method (%10)
    //The key is divided by the size of the hash table, and the remainder determines the index.
    //Example: key % 10 gives an index from 0 to 9.

    //Unordered Map worst case happens due to collisions
    //When many keys collide, operations may take O(n) time instead of O(1) average time.
    //This happens because the hash table must handle multiple keys mapping to the same bucket.

    //Collisions (all keys end up in same index)
    //A collision occurs when two or more keys map to the same index.
    //If many keys map to the same bucket, searching and inserting can become inefficient.

    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i<n ; i++){
    //     cin>>a[i];
    // }

    // //precompute
    // unordered_map <int,int> mpp;
    // for(int i =0; i<n;i++){
    //     mpp[a[i]]++;
    // }

    // //iterate in the map
    // for(auto it: mpp){
    //     cout<< it.first << "->" << it.second << endl;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     //fetch
    //     cout<<mpp[number]<<endl;
    // }

    //highest/lowest frequency element
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }

    //precompute
    map <int,int> mpp;
    for(int i =0; i<n;i++){
        mpp[a[i]]++;
    }
    int maxf =0;
    int maxe =0;
    int minf = INT_MAX;
    int mine = 0;
    for(auto it: mpp){
        if(it.second>maxf){
            maxf=it.second;
            maxe=it.first;
        }
        if(it.second<minf){
            minf=it.second;
            mine=it.first;
        }
    }

    cout<<maxe<<" "<<maxf<<endl;
    cout<<mine<<" "<<minf;

    return 0;
}
