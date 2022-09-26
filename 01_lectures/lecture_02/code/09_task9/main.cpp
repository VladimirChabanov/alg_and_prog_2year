/* 
 * Условие: дано $n$ целых чисел. Определите и выведите на экран минимальное из них.
 *
 * https://wandbox.org/permlink/PtTpLNcMw1OdCe2O
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int count;
    std::cin >> count;

    std::vector<int> arr(count);
    for(int i=0; i<arr.size(); i++) std::cin >> arr[i];
    std::cout << *std::min_element(arr.begin(), arr.end());
}