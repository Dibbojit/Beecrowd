#include<stdio.h>
int main()
{
    float x, j = 0;
    int i, sum = 0;
    for(i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        if(x > 0)
        {
            j = x + j;
            sum++;
        }
    }
    float average = j / sum;
    printf("%d valores positivos\n", sum);
    printf("%.1f\n", average);
    return 0;
}
