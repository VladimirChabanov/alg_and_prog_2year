/* 
 * Условие: Пользователь вводит целое положительное число n. Затем в следующей строке, через пробел, вводятся n чисел. Посчитайте их среднее значение, минимум и максимум. Результат вывести на экран.
 *
 * https://wandbox.org/permlink/3N9a0jlmHBcv8K3F
 */

#include <iostream>
#include <algorithm>
 
int main()
{
    int count;
    std::cin >> count;

    double val;
    std::cin >> val;
    
    double sum = val, min = val, max = val;
    for(int i=0; i < count-1; i++){
        std::cin >> val;
        sum += val;
        min = std::min(min, val);
        max = std::max(max, val);
    }
    
    std::cout << sum/count << ' ' << min << ' ' << max;
}