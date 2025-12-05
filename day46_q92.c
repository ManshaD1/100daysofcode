/* Q92: Average of N numbers */
#include <stdio.h>

int main(){
    int n,s=0,x;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        s+=x;
    }

    printf("%.2f",(float)s/n);
}
