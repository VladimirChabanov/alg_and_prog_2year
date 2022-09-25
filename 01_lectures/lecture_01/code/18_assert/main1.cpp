// https://wandbox.org/permlink/8owSOyhi66nxgwdY

#include <iostream>

// #define NDEBUG
#include <cassert>
 
int main()
{
    assert(2+2 == 4);
    std::cout << "Checkpoint #1\n";
 
    assert((void("void helps to avoid 'unused value' warning"), 2*2 == 4));
    std::cout << "Checkpoint #2\n";
 
    assert((010+010 == 16) && "Yet another way to add an assert message");
    std::cout << "Checkpoint #3\n";

    static_assert(2+2 == 4);
    std::cout << "Checkpoint #4\n";
 
    static_assert(2*2 == 4, "Yet another way to add an assert message");
    std::cout << "Checkpoint #5\n";
}