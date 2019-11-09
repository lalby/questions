#include <iostream>

using namespace std;


template <typename T>
struct Node
{
    T data;
    Node * next;
    
    Node(){ next=NULL;}
};


template<typename T>
class Stack
{
    Node<T> *top;
    
    public:
    
    Node<T> * getNode (){ return new Node<T>();}
    
    void push(T data)
    {
        Node<T> *tmp=getNode();
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
    
    
    T pop(){
    
        Node<T> * p= top;
        top=top->next;
        
        T d = p->data;
        delete p;
        return d;
    }
    
};



int main()
{
    Stack<int> s;
    
    s.push(2);
    s.push(3);
    s.push(12);
    s.push(24);
    
    std::cout<<s.pop();
    std::cout<<s.pop();
    std::cout<<s.pop();
    std::cout<<s.pop();
   
   
    Stack<std::string> s1;
    
    s1.push("hi");
    s1.push("this");
    s1.push("is");
    s1.push("test");
    
    std::cout<<s1.pop();
    std::cout<<s1.pop();
    std::cout<<s1.pop();
    std::cout<<s1.pop();
  
    return 0;
}
