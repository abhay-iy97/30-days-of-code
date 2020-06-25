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
            Node **ptr_2_ptr = &head;
            
            while(*ptr_2_ptr != nullptr)
                ptr_2_ptr = &((*ptr_2_ptr)->next);
            
            *ptr_2_ptr = new Node(data);
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