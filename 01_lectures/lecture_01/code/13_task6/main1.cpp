/*
 * Дана строка, в которой, через запятую перечислены 3 суммы в рублях. Все числа целые, без копеек. После числа, без пробела, написано слово рубль в соответствующем падеже. Например: "20рублей, 1рубль, 25рублей". Выведите итоговую сумму денег на экран (просто число).
 *
 * https://wandbox.org/permlink/w5orQu7iTxO83Emv
 */
 
#include <iostream>

int main(){
    std::string ignore;
    int sum = 0, current;
    
    std::cin >> current >> ignore;
    sum = sum + current; // sum += current;
    
    std::cin >> current >> ignore;
    sum = sum + current;
    
    std::cin >> current >> ignore;
    sum = sum + current;
    
    std::cout << sum;
}
