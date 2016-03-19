#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void DEBXHK()//等额本息还款
{
	double F,rate,P;
	int year;
	printf("请输入贷款金额:");
	scanf("%lf",&F);
	printf("请输入存入贷款年限:");
	scanf("%d",&year);
	printf("请输入年利率:");
	scanf("%lf",&rate);
	P=F*rate/(12*(1+rate)*(pow(1+rate,year)-1));
	printf("每月等额本息还款为:%.2lf",P);
}
void Benjin()
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
void Zhongzhi()//复利终值计算
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
void Dingqi()//定投计算
{
	double Money,money,money1,rate1,rate,sum;
	int years,i,n;
	char j;
ab:
	printf("|***************************************************************|\n");
    printf("|          1.按年投                                2.按月投     |\n");
    printf("|***************************************************************|\n");
	printf("请选择功能[1,2]:");
	scanf("%d",&n);
	if(n==1){
		printf("请输入每年定存金额:"); 
		scanf("%lf",&money); 
		printf("请输入年回报率:"); 
		scanf("%lf",&rate); 
		printf("请输入次数（年）:"); 
		scanf("%d",&years); 
		Money=money;
		sum=0;
        for(i=1;i<=years;i++)
		{
            sum=money*(1+rate);
            money=sum+Money;                
        }
		printf("若连本带利投资，最后得到的资产总值为:%.2lf",sum);
	}
	if(n==2)
	{
		printf("请输入每月定存金额:"); 
		scanf("%lf",&money); 
		printf("请输入月回报率:"); 
		scanf("%lf",&rate); 
		printf("请输入次数（年）:"); 
		scanf("%d",&years); 
		Money=money*12;
		sum=0;
		money1=money*12;
		rate1=rate*12;
		for(i=1;i<=years;i++)
		{
            sum=money1*(1+rate1);
            money1=sum+Money;                
		}
		printf("若连本带利投资，最后得到的资产总值为:%.2lf",sum);
	} 
		printf("\n是否继续定额计算(y or n)? :");
         scanf(" %c",&j);
            if(j=='y' || j=='Y')
               goto ab;//是否继续查询
			    return;
}
void Rate()//利率计算
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
	printf("年利率为:%.3lf",i);
}
void Time()//存款年份计算
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
    puts("\t\t|                    0: 退出程序                       |");
    puts("\t\t|******************************************************|");
	printf("请选择<0~2>:");
}
void Fuli()
{
	int n;
	char j;
abs:
	puts("\t\t|******************************************************|");
	puts("\t\t|                    1: 终值计算                       |");
	puts("\t\t|                    2: 本金计算                       |");
	puts("\t\t|                    3: 期数计算                       |");
	puts("\t\t|                    4: 利率计算                       |");
	puts("\t\t|                    5: 定期计算                       |");
	puts("\t\t|                    6: 等额本息还款                   |");
	puts("\t\t|******************************************************|");
	printf("请选择功能[1~6]:");
	scanf("%d",&n);
	if(n==1)
	{
		Zhongzhi();
	}
	if(n==2)
	{
		Benjin();
	}	
	if(n==3)
	{
		Time();
	}	
	if(n==4)
	{
		Rate();
	}
	if(n==5)
	{
		Dingqi();
	}
	if(n==6)
	{
		DEBXHK();
	}
	printf("\n是否继续(y or n)? :");
         scanf(" %c",&j);
            if(j=='y' || j=='Y')
               goto abs;//是否继续查询
			    return;
	
}
void Danli()//单利计算
{
	int year;//year表示复利年限
	double p;//p表示本金
	double i;//i表示年利率
	double Fv;//表示复利后的终值
	printf("请输入单利次数（年）：");
    scanf("%d",&year);
	printf("\n请输入本金：");
	scanf("%lf",&p);
	printf("\n请输入年利率：");
	scanf("%lf",&i);
	printf("\n单利后的终值为:");
	Fv=p*(1+i*year);
	printf("%.2lf",Fv);
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
			Danli();break;
		case 0:
			n=0;exit(0);
			
		}
	}	
	
}
