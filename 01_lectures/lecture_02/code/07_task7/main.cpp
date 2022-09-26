/* 
 * Условие: Дана строка состоящая из круглы скобок, например: (), ((())), ()()(()), Проверьте баланс и правильность порядка скобок в строке. Если скобочная последовательность правильная, выведите OK иначе NOT. Примеры не правильных скобочных последовательностей: ()()), )(, (.
 *
 * https://wandbox.org/permlink/oFxagj2xXsI7dpH0
 */

#include <iostream>
 
int main()
{
    std::string str;
    std::cin >> str;

    int open_count = 0;
    for(int i=0; i < str.size(); i++){
        open_count += (str[i] == '(') ? 1 : -1; 
        if(open_count < 0) break;
    }
    if (open_count != 0) std::cout << "NOT";
    else std::cout << "OK";
}