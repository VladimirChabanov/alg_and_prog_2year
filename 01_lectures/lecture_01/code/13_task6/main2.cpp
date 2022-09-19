/*
 * Дана строка, в которой, через запятую перечислены 3 суммы в рублях. Все числа целые, без копеек. После числа, без пробела, написано слово рубль в соответствующем падеже. Например: "20рублей, 1рубль, 25рублей". Выведите итоговую сумму денег на экран (просто число).
 *
 * https://wandbox.org/permlink/tms9z0eFCpPHYDJa
 */
 
#include <iostream>

int main(){
    int sum = 0, current;
    
    std::cin >> current;
    std::cin.ignore(20, ' ');
    sum += current;
    
    std::cin >> current;
    std::cin.ignore(20, ' ');
    sum += current;
    
    std::cin >> current;
    std::cin.ignore(20, ' ');
    sum += current;
    
    std::cout << sum;
}
