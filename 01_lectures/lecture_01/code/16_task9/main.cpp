/*
 * Условие: Дана пара целых чисел. Нужно разделить первое на второе и вернуть результат округлённый до ближайшего целого. 
 * 
 * https://wandbox.org/permlink/KB3rXoIEaAlxM1XO
 */
 
#include <iostream>
#include <cmath>    // round

int main(){
    int a, b;
    std::cin >> a >> b;
    
    std::cout << a / b << std::endl;
    std::cout << (double) a / b << std::endl;              // Приведение к типу в стиле С
    std::cout << static_cast<double>(a) / b << std::endl;  // Приведение к типу в стиле С++
    std::cout << std::round(static_cast<double>(a) / b) << std::endl;
}

// Примеры ввода:
// 2 4
// 1 4
// 3 4
// -2 4
// -1 4
// -3 4