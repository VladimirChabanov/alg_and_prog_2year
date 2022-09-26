/* 
 * Условие: Дана строка, состоящая только из строчных английских символов и цифр. Выведите ОК, если строка палиндром и NOT если не палиндром.
 *
 * https://wandbox.org/permlink/Pp6g2vqi6zkAh8NB
 */

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    std::string rstr(str);
    std::reverse(rstr.begin(), rstr.end());
    
    std::cout << ((str == rstr) ? "OK" : "NOT");
}