#include<bits/stdc++.h>
using namespace std;
 int main(){

    // list<int> myList;  
    // cout<<myList.size()<<endl;
     int ar[5] ={10,20,30,40,50};

    //   list<int> list2 = {1,2,3,4,5};
         list<int> list3(ar,ar+5);
    list<int> myList(list3);
    //  cout<<myList.size()<<endl;
    // cout<<myList.front()<<endl;
     
     for(auto it =  myList.begin(); it != myList.end();it++){
         cout<<*it<<endl;
     }
     return 0;
 }