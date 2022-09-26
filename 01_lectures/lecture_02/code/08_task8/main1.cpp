/* 
 * Условие: Дана строка, состоящая только из строчных английских символов и цифр. Выведите ОК, если строка палиндром и NOT если не палиндром.
 * 
 * https://wandbox.org/permlink/VYW2yq2t3ZNj7O2P
 */

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;

    for(int i=0, j=str.size()-1; i<j; i++, j--)
        if(str[i] != str[j]) {
            std::cout << "NOT";
            return 0;
        }
    std::cout << "OK";
}