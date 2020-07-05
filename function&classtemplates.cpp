#include<iostream>
using namespace std;
template <typename T, typename S>
bool stackSpace(T a, S b){
    if(a.pos> b.pos)
    return true;
    else
    {
        return false;
    }
    
}

template <typename V>
class stack {
public:
V stackBuf[5];
int pos;
stack():pos(0){}
void push(V);
V pop();
};

template <typename V>
void stack<V>::push(V val){
    if(pos<5)
    {
        stackBuf[pos]= val;
        pos++;
    }
    else{
        cout<<"stack is full"<<endl;
    }

}

template <typename V>
V  stack<V>::pop(){
    V val;
    if(pos>0)
    {
        return (stackBuf[--pos]);
    }
    else
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }

}

int main(){
    stack<int> a;
    a.push(1);
    a.push(2);
    stack<char> b;
    b.push('a');
    b.push('a');
    b.push('a');
    if(stackSpace<stack<int>,stack<char>>(a,b)){
        cout<<"stack A is free"<<endl;
    }
    else
    {
        cout<<"stack B is free"<<endl;
    }
    
}