#include<iostream>
#include"temp.h"

template<class T>
void Data<T>::set(T data)
{
    value_ = data;
}

template<class T>
T Data<T>::get() const
{
    return value_;
}