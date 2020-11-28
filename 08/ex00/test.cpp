#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main(void)
{
    int arr[] = {5,4,3,2,1};
    std::vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    std::vector<int>::iterator it = std::find(v.begin(), v.end(), 20);
    std::cout << *it << std::endl;
}