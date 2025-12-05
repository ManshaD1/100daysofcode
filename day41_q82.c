/* Q82: Print each character of string in a new line */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    for(int i=0;s[i];i++){
        printf("%c\n",s[i]);
    }
}
