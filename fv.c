#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void DEBXHK()//�ȶϢ����
{
	double F,rate,P;
	int year;
	printf("�����������:");
	scanf("%lf",&F);
	printf("����������������:");
	scanf("%d",&year);
	printf("������������:");
	scanf("%lf",&rate);
	P=F*rate/(12*(1+rate)*(pow(1+rate,year)-1));
	printf("ÿ�µȶϢ����Ϊ:%.2lf",P);
}
void Benjin()
{
	int Year;	
	double P,i;
	double S;
	double E,D=1;
	int l;
	printf("�����ڴ����Ϊ��");
	scanf("%lf",&S);
	printf("\n������洢���ޣ�");
	scanf("%d",&Year);		
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
	for(l=1;l<=Year;l++)
	{
		E=D*(1+i);
		D=E;
	}
	P=S/D;
	printf("\nӦ����ı���Ϊ��");
	printf("%.2lf",P);
}
void Zhongzhi()//������ֵ����
{
	int year;//year��ʾ��������
	double p;//p��ʾ����
	double i;//i��ʾ������
	double F;//��ʾ���������ֵ
	int k;
    printf("�����븴���������꣩��");
    scanf("%d",&year);
	printf("\n�����뱾��");
	scanf("%lf",&p);
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
    for(k=1;k<=year;k++){
		F=p*(1+i);
		p=F;
	}
	printf("\n���������ֵΪ:");
	printf("%.2lf",F);
}
void Dingqi()//��Ͷ����
{
	double Money,money,money1,rate1,rate,sum;
	int years,i,n;
	char j;
ab:
	printf("|***************************************************************|\n");
    printf("|          1.����Ͷ                                2.����Ͷ     |\n");
    printf("|***************************************************************|\n");
	printf("��ѡ����[1,2]:");
	scanf("%d",&n);
	if(n==1){
		printf("������ÿ�궨����:"); 
		scanf("%lf",&money); 
		printf("��������ر���:"); 
		scanf("%lf",&rate); 
		printf("������������꣩:"); 
		scanf("%d",&years); 
		Money=money;
		sum=0;
        for(i=1;i<=years;i++)
		{
            sum=money*(1+rate);
            money=sum+Money;                
        }
		printf("����������Ͷ�ʣ����õ����ʲ���ֵΪ:%.2lf",sum);
	}
	if(n==2)
	{
		printf("������ÿ�¶�����:"); 
		scanf("%lf",&money); 
		printf("�������»ر���:"); 
		scanf("%lf",&rate); 
		printf("������������꣩:"); 
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
		printf("����������Ͷ�ʣ����õ����ʲ���ֵΪ:%.2lf",sum);
	} 
		printf("\n�Ƿ�����������(y or n)? :");
         scanf(" %c",&j);
            if(j=='y' || j=='Y')
               goto ab;//�Ƿ������ѯ
			    return;
}
void Rate()//���ʼ���
{
	int year,flat=0; 
	double P,F;
	double i;
	printf("�����뱾����:"); 
	scanf("%lf",&F); 
	printf("������������꣩:"); 
	scanf("%d",&year); 
	printf("�����뱾��:"); 
	scanf("%lf",&P); 
	i=pow(F/P, 1.0/year)-1;
	printf("������Ϊ:%.3lf",i);
}
void Time()//�����ݼ���
{
	int n,flat=0; 
	double P,i,F; 
	printf("�����뱾����:"); 
	scanf("%lf",&F); 
	printf("��������ر���:"); 
	scanf("%lf",&i); 
	printf("�����뱾��:"); 
	scanf("%lf",&P); 
	for(n=1;n<100;n++)    //��ٷ���100������ļ�Ϣ����
    {
		if((P*(pow((1+i),n)))>=F)
        {
            printf("��Ϣ����:%d\n\n",n);
			flat=1;
			break;
        }
	}
	if(flat==0)
		printf("��100����û�з��ϼ�Ϣ����!\n\n");
	
}
void menu()
{	                             
    puts("\n\n");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    ��Ϣ����ϵͳ                      |");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    1: ��������                       |");
    puts("\t\t|                    2: ��������                       |");
    puts("\t\t|                    0: �˳�����                       |");
    puts("\t\t|******************************************************|");
	printf("��ѡ��<0~2>:");
}
void Fuli()
{
	int n;
	char j;
abs:
	puts("\t\t|******************************************************|");
	puts("\t\t|                    1: ��ֵ����                       |");
	puts("\t\t|                    2: �������                       |");
	puts("\t\t|                    3: ��������                       |");
	puts("\t\t|                    4: ���ʼ���                       |");
	puts("\t\t|                    5: ���ڼ���                       |");
	puts("\t\t|                    6: �ȶϢ����                   |");
	puts("\t\t|******************************************************|");
	printf("��ѡ����[1~6]:");
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
	printf("\n�Ƿ����(y or n)? :");
         scanf(" %c",&j);
            if(j=='y' || j=='Y')
               goto abs;//�Ƿ������ѯ
			    return;
	
}
void Danli()//��������
{
	int year;//year��ʾ��������
	double p;//p��ʾ����
	double i;//i��ʾ������
	double Fv;//��ʾ���������ֵ
	printf("�����뵥���������꣩��");
    scanf("%d",&year);
	printf("\n�����뱾��");
	scanf("%lf",&p);
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
	printf("\n���������ֵΪ:");
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
