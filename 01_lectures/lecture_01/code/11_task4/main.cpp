/*
 * Условие: Выведите на экран целое число 1337 и число 𝜋 с точностью до 2го знака после запятой.
 *
 * https://wandbox.org/permlink/31tYRalnrIBFtzOc
 */
 
#include <iostream>
#include <iomanip>  // setprecision

int main(){
    int leet = 1137;
    double pi = 3.1415926535;
    std::cout << leet << ' ' << pi << std::endl;
    std::cout << leet << ' ' << std::setprecision(3) << pi << std::endl;
    std::cout << leet << ' ' << pi << std::endl;
}
