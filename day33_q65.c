//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main(){
    char num[1001];
    int freq[10]={0};
    scanf("%s",num);
    for(int i=0; num[i]!='\0' ;i++){
        freq[num[i]-'0']++;
    }
    int maxCount=0, answer=0;
    for(int d=0; d<10; d++){
        if(freq[d]>maxCount){
            maxCount=freq[d];
            answer=d;
        }
    }
    printf("%d",answer);
    return 0;
}
