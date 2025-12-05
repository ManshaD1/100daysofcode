/* Q94: Smallest number in an array */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],min;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            min=a[i];
        }else if(a[i]<min){
            min=a[i];
        }
    }

    printf("%d",min);
}
