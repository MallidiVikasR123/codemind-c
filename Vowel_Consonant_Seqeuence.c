#include<stdio.h>
#include<string.h>
int main(){
    
    char a[100],j;
    scanf("%s",a);
    for(int i=0;i<100;i++){
        if(a[i]==NULL) break;
        else if(j!='V' && (a[i]=='a' | a[i]=='e' | a[i]=='i' | a[i]=='o' | a[i]=='u')){
            j='V';
            printf("V");
        }
        else if(j!='C'){
            j='C';
            printf("C");
        }
    }   
    
    return 0;
}