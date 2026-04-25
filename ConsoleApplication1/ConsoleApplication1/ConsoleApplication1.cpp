// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //int answer = 5;

    int t = (int)time(nullptr);

    int answer = t % 10;

    int input;

    int rank = 0;

    bool gameclear = false
    while (!gameclear)
    {
        scanf_s("%d", &input);

        

        if (answer == input)
        {
            rank = 2;
            printf("一致!\n");
        }
        int sub = answer - input;
        else if (answer != input)
        {

            if (sub > -3 && sub < 3)
            {
                rank = 1;
                printf("惜しい！\n");
            }
        }
        switch (rank)
        {
        case 2:
            printf("ランクS\n");
            gameclear = true;
            break;
        case 1:
            printf("ランクA\n");
            break;
        default:
            printf("ランクB\n");
            break;
        }
        
    }
   
    return 0;
}