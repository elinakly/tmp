#include "Array.tpp"
template <typename T>

Array<T>::Array()
{
    _arr = NULL;
    _size = 0;
}
template <typename T>

Array<T>::Array(unsigned int n)
{
    _arr = new T[n];
}