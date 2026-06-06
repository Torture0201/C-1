#include <iostream>

int addint(int a, int b, int c);
float addfloat(float a, float b);
double adddouble(double q, double p);

int main()
{
    addint(1, 2, 3);
    addfloat(10, 20);
    adddouble(100, 200);

}

int addint(int a, int b, int c)
{
    int x = a + b + c;
    printf("int関数の足し算　結果%d\n", x);
    return 0;
}

float addfloat(float a, float b)
{
    float y = a + b;
    printf("float関数の足し算　結果%f\n", y);
    return 0;
}

double adddouble(double a, double b)
{
    double z = a + b;
    printf("double関数の足し算　結果%f\n", z);
    return 0;
}
