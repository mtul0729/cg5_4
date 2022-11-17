#include<stdio.h>
int main(void){
  int n,m,i,j,k,t,flag=0;
  scanf("%d",&n);
  int N[n][n];
  for(i = 0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&N[i][j]);
    }  
  }
  scanf("%d",&m);
  int M[m][m];
  for(i = 0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&M[i][j]);
    }  
  }
  //输入完成
    for (j=0;j<n-m+1;j++)
    {
        for (i=0;i<n-m+1;i++)
        {
            //判断
            flag=1;
            for (k=0;k<m;k++){
                for(t=0;t<m;t++){
                    if(N[k+i][t+j] != M[k][t]){
                    flag = 0;
                    break;
                    }
                }
            if(flag == 1)break;
            }
        }
    }
    if(flag==1)printf("%d,%d",i,j);
    else printf("-1");
    return 0;
}