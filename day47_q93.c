/* Q93: Largest number in an array */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],max;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            max=a[i];
        }else if(a[i]>max){
            max=a[i];
        }
    }

    printf("%d",max);
}
