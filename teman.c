#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, d;
    scanf("%d %d", &n, &d);
    int x[n], y[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    int min = 1000000000, max = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int dx = abs(x[j] - x[i]);
            int dy = abs(y[j] - y[i]);
            int tingkat = pow(dx, d) + pow(dy, d);

            if (tingkat < min){
                min = tingkat;
            }
            if (tingkat > max){
                max = tingkat;
            }
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}