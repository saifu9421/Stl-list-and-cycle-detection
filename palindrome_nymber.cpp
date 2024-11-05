#include<bits/stdc++.h>
using namespace std;
 int main(){
      int n,b,tmp,r;
       cin>>n;
        tmp =  n;
        b = 0;
        while (n!=0)
        {
            r = n%10;
            b = b*10+r;
            n = n/10;
        };
         if(tmp == b){
             cout<<"palindrom"<<endl;
         }else{
             cout<<"Not palindrom"<<endl;
         }
          
     return 0;
 }