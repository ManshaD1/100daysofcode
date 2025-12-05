/* Q118: Count how many elements are prime */
#include <stdio.h>

int main(){
    int n,c=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]<2){
            continue;
        }

        int f=1;

        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                f=0;
            }
        }

        if(f){
            c++;
        }
    }

    printf("%d",c);
}
