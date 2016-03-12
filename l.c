#include<stdio.h>
#include<stdlib.h>
int year;//year表示复利年限
int Year;
double p;//p表示本金
double P;
double i;//i表示年利率
double F;//表示复利后的终值
double Fv;//表示复利后的终值
double S;
int k,n,l;
void menu()//功能选择菜单函数
{	                             
    puts("\n\n");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    利息计算系统                      |");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    1: 复利计算                       |");
    puts("\t\t|                    2: 单利计算                       |");
	puts("\t\t|                    3: 逆推计算                       |");
    puts("\t\t|                    0: 退出程序                       |");
    puts("\t\t|******************************************************|");
	printf("请选择<1~3>:");
}
void Fuli()//复利计算函数
{
    printf("请输入复利年限：");
    scanf("%d",&year);
	printf("\n请输入本金：");
	scanf("%lf",&p);
	printf("\n请输入年利率：");
	scanf("%lf",&i);
    for(k=1;k<=year;k++){
		F=p*(1+i);
		p=F;
	}
	printf("\n复利后的终值为:");
	printf("%.2lf",F);
	
}
void Danli()//单利计算函数
{
	printf("请输入复利年限：");
    scanf("%d",&year);
	printf("\n请输入本金：");
	scanf("%lf",&p);
	printf("\n请输入年利率：");
	scanf("%lf",&i);
	printf("\n单利后的终值为:");
	Fv=p*(1+i*year);
	printf("%.2lf",Fv);
}
void Nitui()//逆推函数
{
	double E,D=1;
	printf("输入期待金额为：");
	scanf("%lf",&S);
	printf("\n请输入存储年限：");
	scanf("%d",&Year);
	
	printf("\n请输入年利率：");
	scanf("%lf",&i);
	
	
	for(l=1;l<=Year;l++)
	{
		E=D*(1+i);
		D=E;
	}
	P=S/D;
	printf("\n应输入的本金为：");
	printf("%.2lf",P);
}

main(){
	
	while(1)
	{
		menu();
		scanf("%d",&n);//输入选择功能的编号
		if(n==0) break;
		switch(n)
		{  
		case 1:
			Fuli(); break;
		case 2:
			Danli();
			break;
		case 3:
			Nitui();
			break;
		case 0:
			n=0;exit(0);
			
		}
	}
		
	
}
