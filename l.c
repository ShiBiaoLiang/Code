#include<stdio.h>
#include<stdlib.h>
int year;//year��ʾ��������
int Year;
double p;//p��ʾ����
double P;
double i;//i��ʾ������
double F;//��ʾ���������ֵ
double Fv;//��ʾ���������ֵ
double S;
int k,n,l;
void menu()//����ѡ��˵�����
{	                             
    puts("\n\n");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    ��Ϣ����ϵͳ                      |");
    puts("\t\t|******************************************************|");
    puts("\t\t|                    1: ��������                       |");
    puts("\t\t|                    2: ��������                       |");
	puts("\t\t|                    3: ���Ƽ���                       |");
    puts("\t\t|                    0: �˳�����                       |");
    puts("\t\t|******************************************************|");
	printf("��ѡ��<1~3>:");
}
void Fuli()//�������㺯��
{
    printf("�����븴�����ޣ�");
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
void Danli()//�������㺯��
{
	printf("�����븴�����ޣ�");
    scanf("%d",&year);
	printf("\n�����뱾��");
	scanf("%lf",&p);
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
	printf("\n���������ֵΪ:");
	Fv=p*(1+i*year);
	printf("%.2lf",Fv);
}
void Nitui()//���ƺ���
{
	double E,D=1;
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

main(){
	
	while(1)
	{
		menu();
		scanf("%d",&n);//����ѡ���ܵı��
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
