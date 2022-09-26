/* 
 * Условие: дано $n$ целых чисел. Определите и выведите на экран минимальное из них.
 *
 * https://wandbox.org/permlink/zF4ch6PDayqXEqt1
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>  // std::ostream_iterator

int main()
{
    int count;
    std::cin >> count;

    std::vector<int> arr(count);
    for(int i=0; i<arr.size(); i++) std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++) std::cout << arr[i] << " ";
    // std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
}