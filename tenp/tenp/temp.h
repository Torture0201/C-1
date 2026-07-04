#pragma once

template<class T>
class Data
{
public:
    void set(T data) {
        value_ = data;
    }
    T get() const {
        return value_
    }
private:
    T value_ = 0;

};;