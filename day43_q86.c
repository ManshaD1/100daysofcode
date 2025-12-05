/* Q86: Check if a string is palindrome */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    int i=0;
    while(s[i]){
        i++;
    }

    int l=0,r=i-1,f=1;

    while(l<r){
        if(s[l]!=s[r]){
            f=0;
        }
        l++;
        r--;
    }

    printf(f?"YES":"NO");
}
