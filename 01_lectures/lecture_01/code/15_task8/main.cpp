/*
 * Условие: Существует лотерея в которой можно выиграть джекпот угадав 6 номеров из 36 доступных. Максимум в билете можно отметить 6 номеров (то есть нужно угадать все выпавшие). Определите вероятность выиграть джекпот. $\frac{1}{36} \cdot \frac{1}{35} \cdot \frac{1}{34} \cdot \frac{1}{33} \cdot \frac{1}{32} \cdot \frac{1}{31}$ = $\frac{1}{1 402 410 240}$ 
 * https://wandbox.org/permlink/c5B7bnP8RGY9NTg0
 */
 
#include <iostream>

int main(){
    const auto a = 9.8;
    double x0, v0, t;

    std::cin >> x0 >> v0 >> t;

    std::cout << x0 + v0*t + a*a*t/2 << std::endl;
    // std::cout << x0 + v0*t + a*a*t*1/2 << std::endl;
    // std::cout << x0 + v0*t + 1/2*a*a*t << std::endl;
}