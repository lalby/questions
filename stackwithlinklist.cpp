#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
    
    Node(){ data=0,next=NULL;}
};



class Stack
{
    Node *top;
    
    public:
    
    Node * getNode (){ return new Node();}
    
    void push(int data)
    {
        Node *tmp=getNode();
        tmp->data=data;
        if(top ==NULL)
        {
            top=tmp;
        }
        else
        {
            tmp->next=top;
            top=tmp;
        }
    }
    
    
    int pop(){
    
        Node * p= top;
        top=top->next;
        
        int d = p->data;
        delete p;
        return d;
    }
    
};



int main()
{
    Stack s;
    
    s.push(2);
    s.push(3);
    s.push(12);
    s.push(24);
    
   std::cout<<s.pop();
    std::cout<<s.pop();
    std::cout<<s.pop();
   std::cout<<s.pop();
  
    return 0;
}
