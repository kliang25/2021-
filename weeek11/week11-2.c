#include <stdio.h>
int a[10000000];//在外面開陣列，而且要大1點
int main()
{
printf("請問你想要幾個質數?(最大的質數不超過10000000，請給小一點)");
 int Q;//你想要幾個?Q個
 scanf("%d", &Q);

 int ans=0;
 for(int i=2;i<Q;i++){//質數從2開始數
    if (a[i]==0){//沒被殺，是質數
    ans++;
    printf("%d ",i);
    for(int k=i+i;k<100000000;k+=i){//殺掉兄弟!!!
    a[k]=1;
}
}
}
///printf("%d ",ans);
}
