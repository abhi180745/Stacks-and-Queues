#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class stack
{
    private:
    node *top;

    public:
    stack()
    {
        top=NULL;
    }

    int empty()
    {
        if(top==NULL)
        {
            return 1;
        }
        else return 0;
    }

    void push(int x)
    {
        node *p=new node(x);
        p->next=top;
        top=p;
    }

    int pop()
    {
        int x= top->data;
        node *p=NULL;
        p=top;
        top=top->next;
        delete p;
        return x;
    }

    void display()
    {
        node *q=top;
        while(q!=NULL)
        {
            cout<<" "<<q->data;
            q=q->next;
        }
    }
};


int main()
{
    stack s;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(10);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(20);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(30);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(40);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(50);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(60);
    s.display();cout<<endl;
   
    

     
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
    

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
    

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;


    if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     return 0;


}


