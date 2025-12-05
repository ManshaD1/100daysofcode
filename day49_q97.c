/* Q97: Linear search for an element */
#include <stdio.h>

int main(){
    int n,x,f=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(a[i]==x){
            f=1;
            break;
        }
    }

    printf(f?"Found":"Not Found");
}
