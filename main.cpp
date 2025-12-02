#include <iostream>
#include "funcsHeaders.h"

using namespace std;

int main()
{
    int x=9;

    Stack s(30);
    s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();
    s.stackTop();
    s.push(2.8);
    s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();
     s.stackTop();
    s.push(24);
    s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();
     s.stackTop();
        s.push(244);
    s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();
 s.stackTop();
    s.pop(&x);
        s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();
     s.stackTop();
    //s.pop(&x);s.pop(&x);
        s.isStackFull();
    s.isStackEmpty();
    s.stackDisplay();

  Stack s2=s;
      s2.stackDisplay();
          s2.push(244);
    s2.isStackFull();
    s2.isStackEmpty();
    s2.stackDisplay();
 s2.stackTop();
 s2==s;
s=s2;
 s2==s;

    cout << "Hello world!" << endl;
    return 0;
}
