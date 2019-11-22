#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Nama  : Devi haryani\n");
    printf("Kelas : Reguler 1D\n");
    printf("NPM   : 1914370124\n");

    int i,n,fact=1;
    printf("masukan angka\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("faktorial di %d adalah %d",n,fact );
}
