// https://wandbox.org/permlink/kaZTchDsod9Tune0

#include <iostream>

int main(){
    std::string name = "James Bond";
    int answer = 42;
    double trash; // Тут мусор

    std::cout << name << ' ' << answer << ' ' << trash << std::endl;

    name = "James";
    answer = 43;
    trash = -1.0;
    
    std::cout << name << ' ' << answer << ' ' << trash << std::endl;
}