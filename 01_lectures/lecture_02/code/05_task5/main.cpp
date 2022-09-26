/* 
 * Условие: Пользователь вводит числа и после каждого числа нажимает Enter. После того, как пользователь введёт число 0, ввод считается завершенным и на экран нужно вывести получившуюся сумму.
 *
 * https://wandbox.org/permlink/95ir50qdVn3bPaQc
 */

#include <iostream>
 
int main()
{
    int sum = 0;
    int val;
    do{
        // int val; - ошибка 
        std::cin >> val;
        sum += val;
    }while(val);
        
    std::cout << sum;
}