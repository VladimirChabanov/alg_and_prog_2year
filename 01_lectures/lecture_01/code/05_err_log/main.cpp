// https://wandbox.org/permlink/cVarPaK0CTP1FOk5

#include <iostream>
#define CODE ""
// #define CODE *(int*)1 // ошибка Segmentation fault


int main(){

    std::cout << "Hello, World!" << CODE << " Hi!" << std::endl; // Поток вывода (буферизированный)
    std::cerr << "Hello, Error!" << CODE << " Hi!" << std::endl; // Поток ошибок (не буферизированный)
    std::clog << "Hello, Log!"   << CODE << " Hi!" << std::endl; // Поток ошибок (буферизированный)
}
