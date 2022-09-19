/*
 * Дана строка, в которой, через запятую перечислены 3 суммы в рублях. Все числа целые, без копеек. После числа, без пробела, написано слово рубль в соответствующем падеже. Например: "20рублей, 1рубль, 25рублей". Выведите итоговую сумму денег на экран (просто число).
 *
 * https://wandbox.org/permlink/c6xsZrWvUbXUTm7K
 */
 
#include <iostream>

int main(){
    std::string current;
    int sum = 0;
    
    std::cin >> current;
    sum += stoi(current);
    
    std::cin >> current;
    sum += stoi(current);
    
    std::cin >> current;
    sum += stoi(current);
    
    std::cout << sum;
}
