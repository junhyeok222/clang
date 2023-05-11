#include<stdio.h>
int main() {
    int num,encrypt, password,key=1842;
    printf("num:"),scanf("%d",&num);
    encrypt=num^key;
    printf("encrypt:%d",encrypt);S
    while(1){
    printf("password:"),scanf("%d",password);
    printf("original data:%d\n",encrypt^password);
    }
    return 0;
}
