/* Q102: Insert an element at a position */
#include <stdio.h>

int main(){
    int n,pos,x;
    scanf("%d",&n);

    int a[n+1];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d%d",&pos,&x);

    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }

    a[pos]=x;

    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
}
