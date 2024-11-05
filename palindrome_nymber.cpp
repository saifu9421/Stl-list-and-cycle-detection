#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n, tmp,b,r;
       cin>>n;
      b = 0;
       tmp =  n;
        while (n!=0)
        {
            r =n%10;
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