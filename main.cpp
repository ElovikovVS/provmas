#include <stdlib.h>
#include <stdio.h>
#define N 4
#define M 4

int main()
{
    unsigned int i,j,odstr=0,k; // i,j,k - счетчеки odstr переменная для подсчета одиновых строк с первой

    //заполнение нашего массива по элементно
    int mas[N][M];
    for (i=0; i<N; ++i)
        for (j=0; j<M; ++j)
            {
                system("cls"); //функция очистки экрана
                printf ("plz enter %i %i element = ",i,j);
                scanf ("%i",&mas[i][j]);
            }

    for (i=1; i<N; ++i)
        {
            for (j=0; j<M;++j)
                {
                    for (k=0; k<M;++k)
                        if (mas[i][j]==mas[0][k]) break;
                    if (k==M) break;
                }
            if (j==M) ++odstr;
        }

    for (i=0;i<N;++i,printf("\n"))
        for(j=0;j<M;++j)
            printf("%4i",mas[i][j]);

    printf ("The number of lines identical to the first line = %i \n",odstr);
    system("pause");//задежка перед закрытием рабочего окна
    return 1;
}
