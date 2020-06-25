#include <iostream>
#include <cstddef>
using namespace std;  
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=nullptr;
        }
};
class Solution{
    public:
//MY CODE STARTS HERE
      Node* insert(Node *head,int data)
      {
            Node *LL_itr = head;
            if(head == nullptr)
                return (new Node(data));
            
            while(LL_itr->next != nullptr)
                LL_itr = LL_itr->next;

            LL_itr->next = new Node(data);
            return head;
      }
//MY CODE ENDS HERE
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
  Node* head=nullptr;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    } 
  mylist.display(head);
    
}