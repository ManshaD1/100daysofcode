/* Q116: Sum of elements at even indices */
#include <stdio.h>

int main(){
    int n,s=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0){
            s+=a[i];
        }
    }

    printf("%d",s);
}
