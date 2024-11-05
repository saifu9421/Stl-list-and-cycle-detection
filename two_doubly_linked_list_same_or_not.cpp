#include<bits/stdc++.h>
using namespace std;
  class Node{
      public:
         int val;
          Node*prev;
          Node *next;
            Node(int val){
                this->val =  val;
                  this->prev = NULL;
                  this->next = NULL;
            }
    };
     int size(Node *head){
           Node *tmp = head;
            int count  = 0;
            while (tmp != NULL)
            {
                  count ++;
                  tmp = tmp->next;
            };
             return count;
     };
      
        void same_or_not(Node *head , Node *head2){ 
               Node *tmp =  head;
                Node *tmp2 = head2;
                    bool flag  =  true;
                 if(size(tmp) != size(tmp2)){
                       flag = false;
                 }else{
                      while (tmp != NULL && tmp2 != NULL)
                      {
                           if(tmp->val != tmp2->val){
                             flag = false;
                              break;
                           };
                            tmp =  tmp->next;
                              tmp2 = tmp2->next;
                      }
                 };
                 if(flag == true){
                     cout<<"Same"<<endl;
                 }else{
                      cout<<"Not same"<<endl;
                 }
        };
         
         void insert(Node *&head, Node *&tail,int  val){
         Node *newNode = new Node(val);
       if(head == NULL){
          head =  newNode;
            tail = newNode;
           return;
       };
     Node *tmp =  head;
       while (tmp->next !=  NULL)
       {
          tmp =  tmp->next;
       };
       tmp->next = newNode;
        newNode->prev = tmp;
         tail =  newNode;   
          };
   
     void revers_print(Node *tail){
            Node *tmp = tail;
            while (tmp != NULL)
            {
                cout<<tmp->val<<" ";
                 tmp =  tmp->prev;
            };
     };
      
         
 int main(){
       Node *head = NULL;
        Node *tail = NULL;
         Node *head2 = NULL;
          Node *tail2 = NULL;

         while (true)
         {
          int val; cin>>val;
           if(val == -1) break;
           insert(head,tail,val);
         };

           while (true)
         {
          int val; cin>>val;
           if(val == -1) break;
           insert(head2,tail2,val);
         };
          
        //    revers_print(tail);
        same_or_not(head,head2);

     return 0;
 }