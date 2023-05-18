#include<stdio.h>

int main(){
    
    int i,sum=0;
    char a[1000];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++){
        if(a[i]=='0') sum+=0;
        else if(a[i]=='1') sum+=1;
        else if(a[i]=='2') sum+=2;
        else if(a[i]=='3') sum+=3;
        else if(a[i]=='4') sum+=4;
        else if(a[i]=='5') sum+=5;
        else if(a[i]=='6') sum+=6;
        else if(a[i]=='7') sum+=7;
        else if(a[i]=='8') sum+=8;
        else if(a[i]=='9') sum+=9;
    }
    printf("%d",sum);
    return 0;
}