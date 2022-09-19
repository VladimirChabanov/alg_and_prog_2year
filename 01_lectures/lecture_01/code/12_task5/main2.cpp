/*
 * Условие: Пользователь через пробел вводит два числа. Первое целое, а второе вещественное. Нужно получить эти числа и вывести их в обратном порядке (сначала 2е, затем 1е)
 *
 * https://wandbox.org/permlink/AGSfq3yuvR3gulz5
 */
 
#include <iostream>

int main(){
    std::string num1, num2;
    std::cin >> num1 >> num2;
    std::cout << num2 << ' '<< num1 << std::endl;

    int n1 = stoi(num1);
    double n2 = stod(num2);
    // auto n1 = stoi(num1);
    // auto n2 = stod(num2);
    
    std::cout << n2 << ' ' << n1 << std::endl;
    std::cout << std::to_string(n2) << ' ' << std::to_string(n1);
}

// Примеры ввода:
// 1 2.3
// 1n 2.5n
// 1 2.3 на разных строках
// 1 2.3e1
// 2.3 1
// 1T2
