/* Q112: Rotate array right by one position */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],last;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    last=a[n-1];

    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }

    a[0]=last;

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
