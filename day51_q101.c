/* Q101: Count positive, negative and zero elements */
#include <stdio.h>

int main(){
    int n,pos=0,neg=0,zero=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            pos++;
        }else if(a[i]<0){
            neg++;
        }else{
            zero++;
        }
    }

    printf("%d %d %d",pos,neg,zero);
}
