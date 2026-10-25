#include<iostream>
#define MAX 5
using namespace std;

class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }

    int empty()
    {
        if(front==-1 && rear==-1)
        return 1;
        else return 0;
    }

    int full()
    {
        if(rear==MAX-1)
        return 1;
        else return 0;
    }

    int peek()
    {
        return (a[front]);
    }

    void display(void)
    {
        for(int i=front; i<=rear; i++)
        cout<<" "<<a[i];
    }

    void enqueue(int x)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }

    int dequeue()
    {
        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        return x;
    }
};


int main()
{
    queue q;

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(10);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display(); cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(20);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(30);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(40);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(50);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(60);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }






    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;

    return 0;
}


