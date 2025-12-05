/* Q89: Count frequency of a given character */
#include <stdio.h>

int main(){
    char s[200],ch;
    scanf("%[^\n]",s);
    scanf(" %c",&ch);

    int c=0;

    for(int i=0;s[i];i++){
        if(s[i]==ch){
            c++;
        }
    }

    printf("%d",c);
}
