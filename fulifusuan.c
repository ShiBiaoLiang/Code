#include<stdio.h>
main(){
	int month;//month��ʾ��������
	double p;//p��ʾ����
	double i;//i��ʾ������
	double F;//��ʾ���������ֵ
	int k;

	printf("�����븴�����ޣ�");
    scanf("%d",&month);
	printf("\n�����뱾��");
	scanf("%lf",&p);
	printf("\n�����������ʣ�");
	scanf("%lf",&i);
	
	for(k=1;k<=month;k++){
		F=p*(1+i);
		p=F;
	}
	printf("\n���������ֵΪ:");
        printf("%lf",F);
	



}
