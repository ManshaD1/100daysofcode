/* Q81: Count number of characters in a string */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    int i=0;
    while(s[i]){
        i++;
    }

    printf("%d",i);
}
