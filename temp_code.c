#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

int n;
scanf("%d", &n);

for(int i=n;i>=1;i--)
{
    int x=n+1,y=i;
    for(int k=i+1;k<=n;k++){
        x=x-1;
        printf(" %d ",x);
    }
    for(int j=1;j<=(i*2-1);j++){
        printf(" %d ",i);
    }
    for(int k=i+1;k<=n;k++){
        y=y+1;
        printf(" %d ",y);
    }
    printf("\n");
}
// for(int i=1;i<=n;i++){
//     int x=n+1,y=i;
//     for(int k=i+1;k<=n;k++){
//         x=x-1;
//         printf(" %d ",x);
//     }
//     for(int j=1;j<=(i*2-1);j++){
//         printf(" %d ",i);
//     }
//     for(int k=i+1;k<=n;k++){
//         y=y+1;
//         printf(" %d ",y);
//     }
//     printf("\n");
// }

return 0;
}