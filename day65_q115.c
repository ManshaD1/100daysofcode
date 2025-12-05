/* Q115: Find maximum and minimum in array */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],max,min;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(i==0){
            max=min=a[i];
        }else{
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
    }

    printf("%d %d",max,min);
}
