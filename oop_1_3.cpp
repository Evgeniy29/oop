
#include <iostream>
#include <cassert>

class Stack
{
private:
    int array[10]; 
    int len_st; 
 
public:
 
    void reset()
    {
        len_stack = 0;
        for (int i = 0; i < 10; ++i)
            array[i] = 0;
    }
 
    bool push(int value)
    {
       
        if (len_stack == 10)
            return false;
        
        array[len_stack++] = value; 
        return true;
    }
    int pop()
    {
        
        assert (len_stack > 0);
 
                
        return array[--len_stack];
    }
 
    void print()
    {
        std::cout << "( ";
        for (int i = 0; i < len_stack; ++i)
            std::cout << array[i] << ' ';
        std::cout << ")\n";
    }
};

int main()
{
    Stack stack;
    stack.reset();
    stack.print();
    
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    
    stack.pop();
    stack.print();
    
    stack.pop();
    stack.pop();
    stack.print();
    
    stack.pop(); //проверка ошибки
    
    return 0;
}

