#include<stdio.h>

int main()
{
    int a,b,x,y,hasil;
    a = 9;
    b = 5;
    x = 8;
    y = 8;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    hasil = ((a%b)+(x%y));

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", hasil);

    return 0;
}
