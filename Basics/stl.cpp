#include <bits/stdc++.h>
using namespace std;

    //STL

    //Algorithms
    //Containers
    //Functions
    //Iterators

    //Pairs
    void pair1(){
        pair<int, int> p ={1,3};    //declaring and initializing pair

        cout <<p.first <<" " <<p.second; //accessing pair elements 

        pair<int, pair<int, int>> p1 = {1,{3,4}}; //nested pair

        cout <<p.first <<" " <<p1.second.second <<" " << p1.second.first; //accessing nested pair elements

        pair <int, int> arr[] = {{1,2}, {2,5}, {5,1}}; //array of pairs

        cout << arr[1].second; //accessing element of a pair from an array of pair
    }

    //Containers - Vectors 
    //dymanic in size unlike arrays
    void vector1(){
        vector<int> v;   //declaration

        v.push_back(1); //inserts 1 in the vector

        v.emplace_back(2); //dynamically increases size and inserts 2 in the vector

        vector<pair<int, int>>vec;
        vec.push_back({1,2}); //when using pushback we have to add {} to insert a pair

        vec.emplace_back(1,2); //when using emplaceback we dont have to add {}, it automatically assumes (1,2) as a pair

        vector<int> v(5,100); //a vector of 5 size with values of 100 each

        vector<int> v(5); //a vector of 5 size with value of 0 for each

        vector<int> v1(5,20);
        vector<int> v2(v1); //another vector but it copies v1 values so v2 = 5 containers with values of 20 each

        //Accessing elements
        cout<<v[0]; //accessing 0th index element

        //Using iterator
        vector<int>::iterator it = v.begin();
        //v.begin() ppints to the memory of the first element (it++)

        it++;
        cout<<*(it) << " ";

        it = it + 2;
        cout<<*(it)<<" ";

        vector<int>::iterator it= v.end();
        //v.end() points to the memory right after the nth element (it--)

        vector<int>::reverse_iterator it= v.rend();
        //v.rend() points to the memory right before the 1st element (it--)

        vector<int>::reverse_iterator it= v.rbegin();
        //v.rbegin() points to the memory of the last element (it++)

        cout<<v.back()<<" ";
        //v.back() prints the last element

        //Traversing
        for(auto it = v.begin(); it != v.end(); it++){
            cout << *(it) << " ";
        }
        //auto - automatically defines the datatype for the iterator

        for(auto it : v){
            cout<< it << " ";
        }
        //using for each loop;

        //deleting address
        v.erase(v.begin()+1);

        // eg if vector = {10,20,13,15}
        // after erase = {10,13,15}

        //deleting multiple addresses 

        v.erase(v.begin()+2, v.begin()+4);

        // eg if vector = {10,20,13,15,19}
        // after erase = {10,19} 

        //insert function

        vector <int> v(2,100);
        v.insert(v.begin(),300); 

        // so first we had {100,100}, then after insert we got {300,100,100}

        v.insert(v.begin()+1,2,10);

        // this inserts 2, 10s after begin+1 so we got {300,10,10,100,100}

        vector <int> copy(2,50);
        v.insert(v.begin(), copy.begin(), copy.end());

        //what this does is, it inserts the whole "copy" vector at the beginning of "v" vector so we got {50,50,300,10,10,100,100}

        cout<<v.size(); //print how many number of elements are there in a vector

        v.pop_back(); //pops out the last element

        //eg v = {10,20}
        //after popback = {10}

        v1.swap(v2); //swaps elements of 2 vectors

        //eg v1 = {10,20}, v2={30,40}
        //after swap = v1{30,40}, v2{10,20}

        v.clear(); //erases the entire vector

        cout<<v.empty(); //returns if the the vector is empty or not;



    }

    //Containers - Lists
    void list1(){
        list<int> ls;
        ls.push_back(2); //{2}
        ls.emplace_back(4); //{2,4}

        ls.push_front(5); //pushes 5 in the front [insert in vector is time costly]
        //{5,2,4}
        ls.emplace_front(10); //{10,5,2,4}

        //rest of the functions are same as vector
        //begin, end, rbegin, rend, clear, insert, size, swap

    }

    //Containers - Deque
    void deque1(){
        deque<int> dq;
        dq.push_back(1); //{1}
        dq.emplace_back(2); //{1,2}
        dq.push_front(4); //{4,1,2}
        dq.emplace_front(3); //{3,4,1,2}

        dq.pop_back(); //{3,4,1}
        dq.pop_front(); //{4,1}

        dq.back();
        dq.front();

        //rest of the functions are same as vector
        //begin, end, rbegin, rend, clear, insert, size, swap

    }

    //Containers - Stack
    //LIFO - Last In First Out
    void stack1(){
        stack<int> st;
        st.push(1); //{1}
        st.push(2); //{2,1}
        st.push(3); //{3,2,1}
        st.push(3); //{3,3,2,1}
        st.emplace(5); //{5,3,3,2,1}

        cout<<st.top(); //prints 5 **st[2] is invalid**

        st.pop(); //erases 5 so = {3,3,2,1}

        cout << st.size(); //4

        cout<< st.empty(); //false

        stack<int>st1,st2;
        st1.swap(st2);

        //all the operations here in stack are in O(1) time complexity
    }

    //Containers - Queue
    //FIFO - First In First Out
    void queue1(){
        queue<int> q;
        q.push(1); //{1}
        q.push(2);  //{1,2}
        q.emplace(4); //{1,2,4}

        q.back()+=5; //{1,2,9}

        cout << q.back(); //prints 9
        cout << q.front(); //prints 1

        q.pop(); //{2,9}

        cout<<q.front(); //prints 2

        //size swap empty operations same as stack
    }

    //Containers - Priority Queue
    //largest element stays at the top (max heap)
    void priorityqueue1(){
        priority_queue <int> pq;
        pq.push(5); // {5}
        pq.push(2); // {5,2}
        pq.push(8); // {8,5,2}
        pq.emplace(10); // {10,8,5,2}

        cout<<pq.top(); //prints 10

        pq.pop(); //{8,5,2}

        cout<<pq.top(); //prints 8

        //size, swap, empty function same as others

        //minimum element at top (minimum heap)

        priority_queue<int, vector<int>, greater<int>> pq;

        pq.push(5); //{5}
        pq.push(2); //{2,5}
        pq.push(8); //{2,5,8}
        pq.emplace(10); //{2,5,8,10}

        cout<<pq.top(); //prints 2

        //push - O(logn)
        //top - O(1)
        //pop - O(logn)
    }

    //Containers - Set
    //stores everything in sorted order and stores unique elements
    void set1(){
        set<int> st;
        st.insert(1); //{1}
        st.emplace(2); //{1,2}
        st.insert(2); //{1,2}
        st.insert(4); //{1,2,3}
        st.insert(3); //{1,2,3,4}

        //begin(), end(), rbegin(), rend(), size(), empty() and swap are same as those of above

        auto it = st.find(3); // returns an iterator pointing to 3

        //eg - {1,2,3,4,5}
        auto it = st.find(6);
        // 6 isnt present in the set, so it will return st.end() iterator

        st.erase(5); // erases 5 

        int cnt = st.count(1); //gives occurence = 1 if element is present else 0

        auto it = st.find(3);
        st.erase(it); //erases 3 using its iterator

        //before erase = {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2);
        //after erase = {1,4,5} [first, last) <- last value is open 

        auto it = st.lower_bound(2);

        // {1,2,3,4,5}

        //return iterator of the first occurance of 2, if 2 isnt present it returns the iterator of the immediate next greater

        //here 2 is present so it will return iterator of 2

        auto it = st.upper_bound(3);

        // {1,2,3,4,5}

        //returns the iterator of the immediate next greater

        //here for 3 it will return iterator of 4

        //every function takes O(logn)

    }

    //Containers - Multi Set
    //stores everything in sorted order and stores multiple elements
    void multiset1(){
        multiset<int> ms;
        ms.insert(1); // {1}
        ms.insert(1); // {1,1}
        ms.insert(1); // {1,1,1}

        ms.erase(1); //all 1's erased
    
        int cnt = ms.count(1); //count no of 1's

        //only a single one erased
        ms.erase(ms.find(1));

        //for erasing multiple occurance
        //next(it, 2) returns an iterator two positions ahead
        ms.erase(ms.find(1), next(ms.find(1),2));
    }

    //Containers - Unordered Set
    //stores everything in unsorted order and stores unique elements
    void unorderedset1(){
        unordered_set<int> st;

        //all operations work except upperbound and lowerbound
        // time complexity = O(1)
        // worst case = O(n)
    }

    //Containers - Map
    //stores data in respect of (keys, values), here key and value can be of any data type
    //stores unique keys in sorted order
    void map1(){
        map<int,int>mpp;
        map<int, pair<int,int>> mpp;
        map<pair<int,int>, int>mpp1;

        mpp[1]=2; //{1,2}
        mpp.emplace(3,1); //{1,2}{3,1}
        mpp.insert({2,4}); //{1,2}{2,4}{3,1}
        mpp1[{2, 3}] = 10; // {{2,3}{10}}

        //traversing
        for(auto it : mpp){
            cout<<it.first <<" " << it.second << endl;
        }

        //let [{1,2}{2,4}{3,1}]
        cout<<mpp[1]; // {1,2}
        cout<<mpp[5]; // 0 as 5 key doesnt exist

        auto it = mpp.find(3);
        cout << (*it).second;
        //returns iterator for 3

        auto it = mpp.find(5);
        //iterator points to mpp.end()

        auto it = mpp.lower_bound(2);

        auto it = mpp.upper_bound(3);
        
    }

    //Containers - MultiMap
    //same as maps but u can store duplicate keys

    void multimap1(){
        
    }

    //Containers - UnorderedMap
    //same as maps but u everything is unsorted and unique keys

    //works in constant time O(1), worst case O(n)

    void unorderedmap1(){

    }

    //Algorithms
    
    //writing comparator - for my way sorting
    bool comp(pair<int,int>p1,pair<int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        // they are same 
        if(p1.first > p2.first) return true;
        return false;
    }

    void algos(){
        
        sort(a, a+n); //for sorting array
        sort(v.begin(), v.end()); //for sorting vector

        sort(a+2, a+4); //for sorting a specific part

        sort(a, a+n, greater<int>); //for sorting in decending order

        //what if wanna sort in my way?
        //eg - sort it according to second element
        //if second element is same, then sort it according to first element but in decending
        pair<int,int>a[] = {{1,2}, {2,1}, {4,1}};
 
        sort(a,a+n, comp); //here comp is a boolean comparator

        int num = 7;
        int cnt = __builtin_popcount(num); //return no of set bits(1) in a binary
        int long num1 = 287234973;
        int cnt = __builtin_popcountll(num1);

        string s = "123";
        sort(s.begin(), s.end());
        do{
            cout<<s<<endl;
        }while(next_permutation(s.begin(),s.end()));

        //prints all permutation of a string, but first sort

        //returns iterator of max/min element
        int maxi = *max_element(a,a+n);
        int mini = *min_element(a,a+n);
    }

int main(){

    return 0;
}
