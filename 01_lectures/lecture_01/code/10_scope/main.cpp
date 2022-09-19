// https://wandbox.org/permlink/5h6GTJDDUIkgN5gG

#include <iostream>

std::string name = "James";       /* Глобальная переменная */
    
int main(){
    std::string name = "Kate";    /* Локальная переменная  */
    // std::string name = "Bill"; /* Ошибка. Нарушение ODR */
    
    std::cout << name << ' ' << ::name;
}
