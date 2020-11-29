#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main(void)
{
    int arr[] = {5,4,3,2,1};

    int *it = std::find(arr, arr + 5, 10);
    if (it == arr + 5)
        std::cout <<"Nooo~!" <<  std::endl;
    std::cout << *it << std::endl;
}