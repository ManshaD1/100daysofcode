/* Q120: Element-wise sum of two arrays (different sizes allowed) */
#include <stdio.h>

int main(){
    int n,m,i;
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);

    int b[m];

    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    int max=n>m?n:m;
    int c[max];

    for(i=0;i<max;i++){
        c[i]=0;
    }

    for(i=0;i<n;i++){
        c[i]+=a[i];
    }

    for(i=0;i<m;i++){
        c[i]+=b[i];
    }

    for(i=0;i<max;i++){
        printf("%d ",c[i]);
    }
}
