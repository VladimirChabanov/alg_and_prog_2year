/* 
 * Условие: Пользователь вводит целое положительное число n. Затем в следующей строке, через пробел, вводятся n чисел. Посчитайте их среднее значение, минимум и максимум. Результат вывести на экран.
 *
 * https://wandbox.org/permlink/BUaCA5G6MCjDN71g
 */

#include <iostream>
#include <algorithm>
 
int main()
{
    int count, n;
    std::cin >> count;
    n = count;

    double val;
    std::cin >> val;
    
    double sum = val, min = val, max = val;
    while(n > 1){  // while(n - 1 != 0) или while(n - 1)
        std::cin >> val;
        sum += val;
        min = std::min(min, val);
        max = std::max(max, val);
        n--;
    }
    
    std::cout << sum/count << ' ' << min << ' ' << max;
}