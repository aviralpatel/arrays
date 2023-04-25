#include <stdio.h>
#include <stdlib.h>

int main(){
	int x[5]= {2,10,15,17,21};
	int i;
	scanf("%d", &i);
	if(i>=0 && i<=4 ){
    	printf("%d",x[i]);
	}
	else {
    	printf("enter value between 0 to 4");
	}
	return 0;
}