// https://wandbox.org/permlink/m3cKnUElYupToS16

#include <iostream>

// #define NDEBUG
#include <cassert>
 
int main()
{
    assert(2 + 2 == 4);
    std::cout << "Введите:\n 1 - чтобы заварить латте;\n"
              << " 2 - чтобы заварить капучино;\n"
              << " другое - для отправки всем своих интимных фотографий.\n" << std::endl;
    
    int choice;
    std::cin >> choice;
    
    if (choice + 2 == 3) std::cout << "- Завариваю латте!" << std::endl;
    else if (choice + 2 == 4) std::cout << "- Завариваю капучино!" << std::endl;
    else std::cout << "- Отправляю фото!" << std::endl;
}