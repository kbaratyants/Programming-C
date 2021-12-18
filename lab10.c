#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int NOD(int n1, int n2) {
    while (n1 != n2){
        if (n1 > n2) n1 = n1 - n2;
        else n2 = n2 - n1;
    }
    return n1;
}

int NOK(int n1, int n2) {
    return (n1*n2)/NOD(n1, n2);
}

int * generateArr(int n3, int *len) {
    int size = 0;
    int i = 0;
    int n33 = n3;

    while(n3/10 > 0) {
        n3 /= 10;
        size++;
    }

    int *array = malloc(size*sizeof(int));
    while(n33/10 > 0) {
        array[i] = n33%10;
        n33 /= 10;
        i++;
    }

    array[i] = n33;
    *len = i;

    return array;
}

int main()
{
    int n1, n2, n3, *arr;
    int len=0;
    printf("First number:");
    scanf("%d", &n1);
    printf("Second number:");
    scanf("%d", &n2);
    printf("NOD: %d\n", NOD(n1, n2));
    printf("NOK: %d\n", NOK(n1, n2));
    printf("Third number:");
    scanf("%d", &n3);

    arr = generateArr(n3, &len);
    printf("Generated array: [");
    for(len; len>=0; len--) {
        printf("%d", arr[len]);
    }
    printf("]\n");
}