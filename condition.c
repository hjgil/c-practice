#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int chance = 20;
    srand(time(NULL));
    int intRand = rand() % 100 + 1;
    int answer;

    while (chance > 0)
    {
        printf("남은 기회 : %d \n" , chance);
        scanf("%d", &answer);

        if(answer > intRand) 
        {
            printf("입력 값이 더 큽니다. \n" );
        }
        else if (answer < intRand)
        {
            printf("입력 값이 더 작습니다.");
        }
        else if (answer == intRand) 
        {
            printf("정답입니다.");
        }

        chance -- ;
    };
    



}
