/*
 * Условие: Пользователь через пробел вводит два числа. Первое целое, а второе вещественное. Нужно получить эти числа и вывести их в обратном порядке (сначала 2е, затем 1е)
 *
 * https://wandbox.org/permlink/tGt5JH6N6ihdX5TI
 */
 
#include <iostream>

int main(){
    int num1;
    double num2;
    std::cin >> num1 >> num2;
    std::cout << num2 << ' '<< num1;
}

// Примеры ввода:
// 1 2.3
// 1 2.3 на разных строках
// 1 2.3e1
// 2.3 1
// 1T2
