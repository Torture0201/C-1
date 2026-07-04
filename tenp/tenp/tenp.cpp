#include "temp.h"




// エントリー関数

int main()
{
    Data<int> data;
    data.set(100);
    int d = data.get();

    Data<float> dataFloat;
    dataFloat.set(1.5f);
    float f = data.get();
}
