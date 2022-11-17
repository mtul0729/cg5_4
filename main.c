#include<stdio.h>

int main(void) {
    int n, m, i, j, k, t, flag = 0;
    scanf("%d", &n);
    int N[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &N[i][j]);
        }
    }
    scanf("%d", &m);
    int M[m][m];
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    //从此开始难以理解
    for (j = 0; j < n - m + 1; j++) {
        for (i = 0; i < n - m + 1; i++) {
            //判断
            flag = 0;
            for (k = 0; k < m; k++) {
                for (t = 0; t < m; t++) {
                    if (N[k + i][t + j] != M[k][t]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)break;
            }
            if(flag == 0){
                printf("%d,%d", i+1, j+1);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}