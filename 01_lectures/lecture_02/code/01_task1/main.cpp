/* 
 * Условие: Даны 2 целых числа. Выведите на экран наибольшее из них. Если числа равны, то выведите любое из заданных чисел.
 * 
 * https://wandbox.org/permlink/XvyRjmzdXqzuYK8J
 */

#include <iostream>
#include <algorithm> // max
 
int main()
{
    int a, b;
    std::cin >> a >> b;
    
    // Вариант 1    
    if(a > b) std::cout << a;
    else std::cout << b;

    
    /* Вариант 2      
    std::cout << ((a > b) ? a : b);
    */

    /* Вариант 3
    std::cout << std::max(a, b);
    */
}