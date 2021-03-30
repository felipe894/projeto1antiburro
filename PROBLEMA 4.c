// LER ARQUIVO E FAZER MEDIA MASCULINA E FEMININA, E COMPARAR
#include <stdio.h>

// codigo atualizado 2 mudando de branch
int main()
{
    char c,nomedoarquivo[1000];
    int f=0,m=0;
    float mm=0, mf=0,n;
    FILE  *file;
    printf("ME DIGA O NOME DO ARQUIVO: ");
    scanf("%s",nomedoarquivo);
    file=fopen(nomedoarquivo,"r");

    while(fscanf(file," %c %f",&c,&n)!=EOF)
    {


        if(c=='F')
    {

            mf=mf+n;
            f++;
    }
        else
    {
            mm=mm+n;
            m++;
    }
    }
mm=mm/m;
mf=mf/f;
if(mm>mf)
{
    printf("A MELHOR MEDIA EH: M %.2f\n",mm);
}
else
{
    printf("A MELHOR MEDIA EH: F %.2f\n",mf);
}




    return 0;
}
