//һ���100�׸߶��������£�
//ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include<stdio.h>
void fall01(){
	float sum=100.0;
	float fall_sum[11]={0.0};
	
	fall_sum[1]=100.0;
	fall_sum[2]=200.0;

	for(int i=3;i<11;i++){
			fall_sum[i]=fall_sum[i-1]+(fall_sum[i-1]-fall_sum[i-2])/2.0;
			//printf("%4d",fall_sum[i]);
	}
	
		printf("��ʮ�����ʱ��������%4.1f��\n",fall_sum[10]);
		printf("��ʮ�η���%4.1f��",(fall_sum[10]-fall_sum[9])/4.0) ;
}
void fall02(){
	float sn=100.0,hn=sn/2.0;
	int i;
	for(i=2;i<=10;i++){
		sn=sn+hn*2;  //��n�����ʱ������������ 
		hn=hn/2;  //	��n�η����߶� 
	}
	
		printf("��ʮ�����ʱ��������%4.1f��\n",sn);
		printf("��ʮ�η���%4.1f��",hn);
}
int main(){
	fall01();
	return 0;
}

