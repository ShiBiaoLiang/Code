#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void YEAR()
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
	printf("������Ϊ:%lf",i);
}
void time()
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
	puts("\t\t|                    3: ���Ƽ���                       |");
	puts("\t\t|                    4: ��������                       |");
	puts("\t\t|                    5: ���ʼ���                       |");
    puts("\t\t|                    0: �˳�����                       |");
    puts("\t\t|******************************************************|");
	printf("��ѡ��<1~4>:");
}
void Fuli()
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
void Danli()
{
	int year;//year��ʾ��������
	double p;//p��ʾ����
	double i;//i��ʾ������
	double Fv;//��ʾ���������ֵ
	printf("�����븴���������꣩��");
    scanf("%d",&year);
	printf("\n�����뱾��");
	scanf("%lf",&p);
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
	printf("\n���������ֵΪ:");
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
