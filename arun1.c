#include <stdio.h>
int main()
{
    int n1=5, n2=10, n3=15;

    if( n1>=n2 && n1>=n3 )
        printf("%d is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%d is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%d is the largest number.", n3);

    return 0;
}
