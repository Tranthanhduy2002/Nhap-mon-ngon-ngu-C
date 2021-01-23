#include<stdio.h>
int main()
{
    int A, o;
    long L; 
    L = 0;
    A = 1;
    printf("\nNhap o: ");
    scanf("%d", &o);

    while(A <= o)
    {
        L = L + A;
        A++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", o, L);
    return 0;
}
