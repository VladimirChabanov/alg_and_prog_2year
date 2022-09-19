/*
 * Условие: Напишите программу, которая запрашивает у пользователя имя (т.е. выводит текстовое сообщение с просьбой вести имя), после чего отображает на экране текст: "Привет, {Имя пользователя}".
 * Имя может состоять из нескольких слов, разделённых пробелом.
 *
 * https://wandbox.org/permlink/31tYRalnrIBFtzOc
 */

// Вариант I: C++ (не правильный)
#include <iostream>

int main(){
    std::string name;
    std::cout << "Ведите имя: ";
    std::cin >> name;
    std::cout << "Привет, " << name;
}

/*
// Вариант II: C++ (правильный)
#include <iostream>

int main(){
    std::string name;
    std::cout << "Ведите имя: ";
    std::getline(std::cin, name);
    std::cout << "Привет, " << name;
}
*/

/* 
// Вариант III: C
#include <cstdio>

int main(){
    char name[100];
    printf("Ведите имя: ");
    scanf("%99[^\n]", name);
    printf("Привет, %s", name);
}
*/