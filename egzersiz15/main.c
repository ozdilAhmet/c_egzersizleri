#include <stdio.h>
#include <stdlib.h>

//A ve B değişkenlerine tanımlanan iki sayıyı yer değiştiren programı yaziniz.

int main()
{
    int A,B,c;
    printf("A sayisini giriniz\n");
    scanf("%d",&A);

    printf("B sayisini giriniz\n");
    scanf("%d",&B);

    c=A;
    A=B;
    B=c;

    printf("A=%d\nB=%d",A,B);






    return 0;
}
