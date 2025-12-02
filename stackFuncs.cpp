#include <iostream>
#include "funcsHeaders.h"
using namespace std;

Stack::Stack(int stackElements)
{
    this->stackCapacity=stackElements;
    if(stackElements>0)
    {
        this->stackPtr= new int[stackElements];
        this->tos=-1;
        cout<<"I'm Created"<<endl;

    }
    else
    {
        this->stackPtr=nullptr;
        cout<<"Error in Creation"<<endl;
    }
}

// copy const
Stack::Stack(Stack& s)
{
this->tos=s.tos;
this->stackCapacity=s.stackCapacity;
this->stackPtr= new int [this->stackCapacity];
for(int i=0; i<= this->tos ;i++)
{
    this->stackPtr[i]=s.stackPtr[i];
}

cout<<"In copy Constructor"<<endl;
}

// full
bool Stack::isStackFull (void)
{
if(this->tos == (this->stackCapacity)-1)
{
    cout<<"Stack is Full"<<endl;
    return true;
}
else
{
    cout<<"Stack is not Full"<<endl;
    return false;
}

}

// empty
bool Stack::isStackEmpty(void)
{
if(this->tos == -1)
{
    cout<<"Stack is Empty"<<endl;
    return true;
}
else
{
    cout<<"Stack is not Empty"<<endl;
    return false;
}

}
// dispaly
void Stack::stackDisplay(void)   // display all elements or display the pushed elements
{
if(this->tos !=-1)
{
    for(int i=0; i<= this->tos ;i++)
    {
        cout<<this->stackPtr[i]<< " | ";
    }
    cout<<endl;
}
else
{
    cout<<"No Elements to Display"<<endl;
}

}
// push
bool Stack::push(int element)
{

if(this->tos >= -1 &&  this->tos < (this->stackCapacity)-1)
{
    tos++;
    this->stackPtr[(this->tos)]=element;
    cout<<element<<"is pushed"<<endl;
    return true;
}
else
{
    cout<<element<<"isn't pushed"<<endl;
    return false;
}

}
// pop
bool Stack::pop(int* popedElement)
{
if(this->tos > -1 &&  this->tos <= (this->stackCapacity)-1)
{
    *popedElement = this->stackPtr[(this->tos)];
    this->stackPtr[(this->tos)]=0;
    tos--;
    cout<<(*popedElement)<<"is poped"<<endl;
    return true;
}
else
{
    cout<<"Nothing Poped"<<endl;
    return false;
}

}
// operators
bool Stack::operator == (Stack& s)
{
int flag=1;
if(this->tos!=s.tos)
    flag=0;
if(this->stackCapacity!=s.stackCapacity)
    flag=0;
for(int i=0; i<= this->tos ;i++)
{
    if(this->stackPtr[i]!=s.stackPtr[i])
    {
        flag=0;
    }
}

if(flag==1)
{
    cout<<"These 2 Stacks are Equal"<<endl;
    return true;
}
else
{
    cout<<"These 2 Stacks are not same"<<endl;
    return false;
}
}

Stack Stack::operator = (Stack& s)
{
if(this->stackPtr == s.stackPtr)
    return s;


delete [] this->stackPtr;
Stack res;
res.tos=s.tos;
res.stackCapacity=s.stackCapacity;
res.stackPtr= new int [res.stackCapacity];
for(int i=0; i<= this->tos ;i++)
{
    res.stackPtr[i]=s.stackPtr[i];
}
return res;
}

// top
void Stack::stackTop (void)
{
cout<<"Max Index is "<<this->tos<<endl;
}

// destructor
Stack::~Stack()
{
if(this->stackPtr!=nullptr)
{
    delete [] stackPtr;
    cout<<"I'm Dead"<<endl;
}
}
