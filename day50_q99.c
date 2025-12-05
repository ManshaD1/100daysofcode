/* Q99: Sum of even and odd numbers */
#include <stdio.h>

int main(){
    int n,es=0,os=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            es+=a[i];
        }else{
            os+=a[i];
        }
    }

    printf("%d %d",es,os);
}
