#ifndef FUNCSHEADERS_H_INCLUDED
#define FUNCSHEADERS_H_INCLUDED

class Stack{
    private:
        int * stackPtr;
        signed int tos;     // point to highest element in stack
        int stackCapacity;


    public:
        // const
        Stack(int stackElements=5);

        // copy const
        Stack(Stack& s);

        // full
        bool isStackFull (void);

        // empty
        bool isStackEmpty(void);
        // dispaly
        void stackDisplay(void);   // display all elements or display the pushed elements
        // push
        bool push(int element);
        // pop
        bool pop(int* popedElement);
        // operators
        bool operator == (Stack& s);

        Stack operator = (Stack& s);

        // top
        void stackTop (void);

        // destructor
        ~Stack();










};


#endif // FUNCSHEADERS_H_INCLUDED
