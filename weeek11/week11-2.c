#include <stdio.h>
int a[10000000];//�b�~���}�}�C�A�ӥB�n�j1�I
int main()
{
printf("�аݧA�Q�n�X�ӽ��?(�̤j����Ƥ��W�L10000000�A�е��p�@�I)");
 int Q;//�A�Q�n�X��?Q��
 scanf("%d", &Q);

 int ans=0;
 for(int i=2;i<Q;i++){//��Ʊq2�}�l��
    if (a[i]==0){//�S�Q���A�O���
    ans++;
    printf("%d ",i);
    for(int k=i+i;k<100000000;k+=i){//�����S��!!!
    a[k]=1;
}
}
}
///printf("%d ",ans);
}
