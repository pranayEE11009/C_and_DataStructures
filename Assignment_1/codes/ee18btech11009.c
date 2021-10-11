#include <stdio.h>
int SimpleFunction(int Y[], int n, int x){
    int total = Y[0], loopIndex;
    for( loopIndex = 1; loopIndex<=n-1; loopIndex++){
        total = x*total + Y[loopIndex];
    }
    return total;
}
int main()
{
    int y[10] = {2,2,2,2,2,2,2,2,2,2};
    printf("Final solution of the SimpleFunction for n = 10 is: %d", SimpleFunction(y, 10, 3));

    return 0;
}
