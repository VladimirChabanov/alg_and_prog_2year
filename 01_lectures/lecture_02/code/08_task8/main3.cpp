/* 
 * Условие: Дана строка, состоящая только из строчных английских символов и цифр. Выведите ОК, если строка палиндром и NOT если не палиндром.
 *
 * https://wandbox.org/permlink/9yGKKuDanibsJsPb
 */

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    std::cout << (std::equal(str.begin(), str.end(), str.rbegin()) ? "OK" : "NOT");
}