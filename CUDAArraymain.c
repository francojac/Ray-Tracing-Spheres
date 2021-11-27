#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4];
    int sum = 0;

    for (int i = 0; i < a.len(); i++) {
        for (int j = 0; j < i; j++) {
                sum += a[i][j];
        }
    }
    return 0;
}
