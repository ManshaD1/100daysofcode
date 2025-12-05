/* Q100: Find second largest element */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    int max1=-2147483648,max2=-2147483648;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }else if(a[i]>max2){
            max2=a[i];
        }
    }

    printf("%d",max2);
}
