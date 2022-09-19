/*
 * Условие: Выведите на экран консоли две строки: "Wake up, Neo..." и "The Matrix has you..". Вторую вывести под первой.
 * 
 * https://godbolt.org/z/13sz51z7x
 */

// Способ I: Стандартный для С++

#include <iostream>

int main(){
    std::cout << "Wake up, Neo...\n"
              << "The Matrix has you..\n";
}


/*
// Способ II: Вывод в стиле С

#include <cstdio>

int main(){
    printf("Wake up, Neo...\n");
    printf("The Matrix has you..\n");
}
*/

/*
// Способ III: С++20 (не поддерживается большинством компиляторов)
// Можно использовать: https://github.com/fmtlib/fmt

#include <fmt/core.h>

int main() {
    fmt::print("Wake up, Neo...\n");
    fmt::print("The Matrix has you..\n");
}
*/

// Способ IV: C++23
// std::print - https://en.cppreference.com/w/cpp/io/print