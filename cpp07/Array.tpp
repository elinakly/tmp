#pragma once
template<typename T>

class Array
{
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array operator=(const Array &other);
        Array(const Array &other);
        static T size();
    
};