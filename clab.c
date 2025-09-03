
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("enter first no");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    c=a&&b;
    d=a||b;
    e= !b;


    printf("output of AND is %d\n",c);
    printf("output of OR is %d\n",d);
    printf("output of NOT is %d\n",e);
    return 0;

}