#include <stdio.h>
#include <math.h>

int main() 
{
	abs(-5); 		//���������� �������� ������ �����: 5
	fabs(-5.5); 	//���������� �������� ������������� �����: 5.5
	ceil(1.1); 		//���������� �� ���������� �������� ������: 2.0
	floor(-5.9); 	//���������� �� ���������� �������� ������: -6.0
	trunc(4.6);		//���������� ������������� ����� ������������� �����: 4.0
	round(4.6); 	//�������������� ����������: 5.0
	pow(4.0,0.5); 	//���������� 4.0 � ������� 0.5: 2.0
	sqrt(4.0); 		//������: 2.0
	log(5.0);		//����������� ��������
	log10(5.0);		//���������� ��������
	
	sin(0); asin(0); sinh(0); //������������������ �������, ���������� ��� cos � tan
		
	return 0;
}


