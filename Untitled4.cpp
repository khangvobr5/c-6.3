#include <stdio.h>

int main() {
    int num = 1,a,b,c,d, sum = 4321;
    printf("Nhap mat khau:\n");
    printf("So thu %d: ",num);
    scanf("%d",&num);
    a=num*1000;
    printf("So thu %d: ",num + 1);
    scanf("%d",&num);
    b=num*100;
    printf("So thu %d: ",num + 1);
    scanf("%d",&num);
    c=num*10;
    printf("So thu %d: ",num + 1);
    scanf("%d",&num);
    d=num*1;
    if(sum=a+b+c+d){
    	printf("mat khau chinh xac");
	}
	else{
		printf("mat khau ko chinh xac");
	}
return 0;
}


