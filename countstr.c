#include<stdio.h>
#include<string.h>
int main(){
    char name[1000];
    gets(name);
    puts(name);
    int i=0,count=0;
    
    while(name[i] !='\0'){
        i++;
        count++;
    }
    printf("%d",count);
    
    }