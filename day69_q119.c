/* Q119: Swap elements of two arrays */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],b[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++){
        int t=a[i];
        a[i]=b[i];
        b[i]=t;
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
