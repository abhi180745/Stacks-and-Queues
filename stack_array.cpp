#include<iostream>
#define MAX 5
using namespace std;

class stack
{
    private:
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }

    int empty()
    {
    if(top==-1)
    
        return 1;
        else return 0;
    }

    int full()
    {
        if(top==MAX-1)
        {
            return 1;
           
        }
         else return 0;
    }

    void push(int x)
    {
        top++;
        a[top]=x;
    }

    int pop()
    {
        int x= a[top];
        top--;
        return x;
    }

    int peek()
    {
        return (a[top]);
    }

    void display()
    {
        for(int i=top; i>=0; i--)
        cout<<a[i]<<" "<<endl;
    }
};

int main()
{
    stack s;

    if(s.full())
    {
        cout<<"Stack is Full!!";
    }
    else{
        s.push(10);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }
    

    if(s.full())
    {
        cout<<"Stack is Full!!";
    }
    else{
        s.push(20);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }

    if(s.full())
    {
        cout<<"Stack is Full!!";
    }
    else{
        s.push(30);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }

    if(s.full())
    {
        cout<<"Stack is Full!!";
    }
    else{
        s.push(40);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }

    if(s.full())
    {
        cout<<"Stack is Full!!";
    }
    else{
        s.push(50);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }

    if(s.full())
    {
        cout<<"Stack is Full!!"<<endl;
    }
    else{
        s.push(60);
        cout<<"Stack Contents After a Push Operation"<<endl;
        s.display();
    }


    if(s.empty())
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"Stack is Empty!!"<<endl;
    }
    else
    {
        cout<<"Popped Out Element is:"<<s.pop()<<endl;
    }
    cout<<"Stack contents After Pop Operation:"<<endl;
    s.display();

    return 0;


}

