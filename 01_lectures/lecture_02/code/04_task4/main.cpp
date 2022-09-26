/* 
 * Условие: Модифицируйте код предыдущей задачи, чтобы можно было вводить данные многократно без необходимости перезапускать программу после каждого ввода. Выход из программы должен осуществляться если пользователь ввёл отрицательное число.
 *
 * https://wandbox.org/permlink/cvJiXAjcTIFIoXym
 */

#include <iostream>
 
int main()
{
    int a;

    start:
      std::cin >> a;
      if (a < 0) return 0;
      std::cout << a << ' ';
    
      int back_first = a % 10;
      int back_second = a / 10 % 10;

      if (back_second == 1) std::cout << "секунд";
      else if (back_first == 1) std::cout << "секундa";
      else if (back_first == 2 or back_first == 3 or back_first == 4) std::cout << "секунды";
      else  std::cout << "секунд";
      std::cout << std::endl;
    goto start;
}