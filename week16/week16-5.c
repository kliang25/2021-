#include <stdio.h>
char line [300]="10101010101010100001111001111110";
int main()
{
    int ans=0;
    for(int i=0 ; line[i] !='\0' ;i++){
        if( line[i]=='1')ans++;
    }
    printf("¦³%d­Ó1\n", ans);
}

