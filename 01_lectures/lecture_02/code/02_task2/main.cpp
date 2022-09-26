/* 
 * Условие: Даны 3 целых числа. Выведите на экран наибольшее из них. Если числа равны, то выведите любое из заданных чисел.
 * 
 * https://wandbox.org/permlink/LbN9rAyUwpStKe6h
 */

#include <iostream>
#include <algorithm> // max
 
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    // Вариант 1    
    if(a > b)
        if(a > c) std::cout << a;
        else std::cout << c;
    else
        if(b > c) std::cout << b;
        else std::cout << c;
    
    /* Вариант 2      
    std::cout << ((a > b) ? (a > c) ? a : c 
                          : (b > c) ? b : c); 
    */
        
    /* Вариант 3-4
    std::cout << std::max(std::max(a, b), c);
    std::cout << std::max({a, b, c});
    */
}