#include <stdio.h>
 
void printfUsage()
{
	printf("./get_prime_num startnum endnum\n");
}

int main(int argc, char *argv[])
{
    int i, j;

    int nStartNum=0;
    int nEndNum=0;

#if 0
    printf("\nGet Prime number \n");

    printf("input start Number\n");
    scanf("%d", &nStartNum);
	printf("\n\n");

    printf("input To Number\n");
    scanf("%d", &nEndNum);
	printf("\n\n");
#else

    if(argc != 3) {
        printfUsage();
        return 0;
	}

#endif

    printf("Prime numbers from %d to %d are....\n", nStartNum, nEndNum); 
 
    for(i = nStartNum ; i <= nEndNum ; i++) {
        for(j = 2; j <= i-1; j++) {
            if(i % j == 0) {
                break;
            }
        }
        if(i == j) {
            printf("%d \n", i);
        }
    } 
 
    return 0;
}

