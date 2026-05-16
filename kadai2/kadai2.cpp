#include<stdio.h>



int main()
{
    int ages[4];
    ages[0] = 15;
    ages[1] = 32;
    ages[2] = 11;
    ages[3] = 48;

    for (int i = 0; i <= 3; i++) {
        int val = ages[i];

        printf("年齢は %d です\n", val);
    }
}