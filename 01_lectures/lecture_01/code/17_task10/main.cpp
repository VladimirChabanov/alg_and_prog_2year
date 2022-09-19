/*
 * Условие: На вход подаются два числа разделённые пробелом. Сравните их, и выведите на экран true, если первое число больше второго и false, для остальных случаев.
 * 
 * https://wandbox.org/permlink/DOn1wkQdRayd8t32
 */
 
#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;
    
    // std::cout << a > b;
    std::cout << (a > b) << std::endl;
    std::cout << std::boolalpha << (a > b) << std::endl;
    std::cout << std::boolalpha << ((a <=> b) > 0) << std::endl;
}
