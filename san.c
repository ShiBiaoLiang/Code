#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void YEAR()
{
	int year,flat=0; 
	double P,F;
	double i;
	printf("请输入本利和:"); 
	scanf("%lf",&F); 
	printf("请输入次数（年）:"); 
	scanf("%d",&year); 
	printf("请输入本金:"); 
	scanf("%lf",&P); 
	i=pow(F/P, 1.0/year)-1;
	printf("年利率为:%lf",i);
}
void time()
{
	int n,flat=0; 
	double P,i,F; 
	printf("请输入本利和:"); 
	scanf("%lf",&F); 
	printf("请输入年回报率:"); 
	scanf("%lf",&i); 
	printf("请输入本金:"); 
	scanf("%lf",&P); 
	for(n=1;n<100;n++)    //穷举法求100年满足的计息期数
    {
		if((P*(pow((1+i),n)))>=F)
        {
            printf("计息期数:%d\n\n",n);
			flat=1;
			break;
        }
	}
	if(flat==0)
		printf("在100年内没有符合计息期数!\n\n");
	
}
void menu()
{	                             
    puts("\n\n");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    利息计算系统                      |");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    1: 复利计算                       |");
    puts("\t\t|                    2: 单利计算                       |");
	puts("\t\t|                    3: 逆推计算                       |");
	puts("\t\t|                    4: 期数计算                       |");
	puts("\t\t|                    5: 利率计算                       |");
    puts("\t\t|                    0: 退出程序                       |");
    puts("\t\t|******************************************************|");
	printf("请选择<1~4>:");
}
void Fuli()
{
	int year;//year表示复利年限
	double p;//p表示本金
	double i;//i表示年利率
	double F;//表示复利后的终值
	int k;
    printf("请输入复利次数（年）：");
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
void Danli()
{
	int year;//year表示复利年限
	double p;//p表示本金
	double i;//i表示年利率
	double Fv;//表示复利后的终值
	printf("请输入复利次数（年）：");
    scanf("%d",&year);
	printf("\n请输入本金：");
	scanf("%lf",&p);
	printf("\n请输入年利率：");
	scanf("%lf",&i);
	printf("\n单利后的终值为:");
	Fv=p*(1+i*year);
	printf("%.2lf",Fv);
}
void Nitui()
{
	int Year;	
	double P,i;
	double S;
	double E,D=1;
	int l;
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
	int n;
	while(1)
	{
		menu();
		scanf("%d",&n);
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
		case 4:
			time();
			break;
		case 5:
            YEAR();
            break;
		case 0:
			n=0;exit(0);
			
		}
	}	
	
}
