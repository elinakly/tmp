#include "MainFunc.tpp"

int main()
{
    int val1= 1;
    int val2= 2;
    swap(val1, val2);
    int resMin = min(val1, val2);
    std::cout << resMin;
    int resMax = max(val1, val2);
    std::cout << resMax;

}