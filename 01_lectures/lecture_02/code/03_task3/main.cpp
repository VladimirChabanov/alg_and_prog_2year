/* 
 * Условие: Дано число, которое означает количество секунд на таймере. Выведите на экран это число и соответствующее количеству секунд слово, например: 1 секунда, 2 секунды, 5 секунд и т.д.
 *
 * https://wandbox.org/permlink/NHDaTZVTkHQp9FeC
 */

#include <iostream>
 
int main()
{
    int a;
    std::cin >> a;
    std::cout << a << ' ';

    int back_first = a % 10;
    int back_second = a / 10 % 10;

    // Вариант 1
    if (back_second == 1) std::cout << "секунд";
    else if (back_first == 1) std::cout << "секундa";
    else if (back_first == 2 or back_first == 3 or back_first == 4) std::cout << "секунды";
    else  std::cout << "секунд";

    /* Вариант 2
    if (back_second == 1) std::cout << "секунд";
    else
        switch(back_first){
            case 1: std::cout << "секундa"; break;
            case 2:
            case 3:
            case 4: std::cout << "секунды"; break;
            default: std::cout << "секунд"; 
        }
    */
}
