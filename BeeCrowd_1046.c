#include<stdio.h>
int main ()
{
    int start, stop, game;
    scanf("%d %d", &start, &stop);

    if(start > stop || start == stop)
    {
        game = 24 - start + stop;
        printf("O JOGO DUROU %d HORA(S)", game);
    }
    else
    {
        game = stop - start;
        printf("O JOGO DUROU %d HORA(S)", game);
    }
    return 0;
}
