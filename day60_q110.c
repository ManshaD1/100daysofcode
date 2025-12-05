/* Q110: Union of two arrays */
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);

    int b[m];

    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    int c[n+m],k=0;

    for(int i=0;i<n;i++){
        c[k++]=a[i];
    }

    for(int i=0;i<m;i++){
        int f=0;

        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                f=1;
            }
        }

        if(!f){
            c[k++]=b[i];
        }
    }

    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}
