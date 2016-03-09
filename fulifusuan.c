#include<stdio.h>
main(){
	int month;//month表示复利月限
	double p;//p表示本金
	double i;//i表示月利率
	double F;//表示复利后的终值
	int k;

	printf("请输入复利月限：");
    scanf("%d",&month);
	printf("\n请输入本金：");
	scanf("%lf",&p);
	printf("\n请输入月利率：");
	scanf("%lf",&i);
	
	for(k=1;k<=month;k++){
		F=p*(1+i);
		p=F;
	}
	printf("\n复利后的终值为:");
        printf("%lf",F);
	



}
