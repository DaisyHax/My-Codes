#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <int> newdeque (3,100);
    list <int> mylist (4,100);
    queue <int> q;
    queue <int> newqueue(newdeque);
    queue <int,list <int> > listqueue;
    queue <int,list <int> > queuetest(mylist);
    cout<<newdeque.size()<<endl;
    cout<<mylist.size()<<endl;
    cout<<q.size()<<endl;
    cout<<newqueue.size()<<endl;
    cout<<listqueue.size()<<endl;
    cout<<queuetest.size()<<endl;
    q.push(100);
    q.push(50);
    q.push(60);
    q.front()+= q.back();
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
}
