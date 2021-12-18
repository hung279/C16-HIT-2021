#include <stdio.h>

int main()
{
	int m, n;
	printf("Nhap thang: ");
	scanf("%d", &m);
	printf("Nhap nam: ");
	scanf("%d", &n);
	//cach 1: if long nhau
//	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		printf("Thang %d cua nam %d co 31 ngay", m, n);
//	}
//	else
//	{
//		if(m == 4 || m == 6 || m == 9 || m == 11)
//		{
//			printf("Thang %d cua nam %d co 30 ngay", m, n);		
//		}
//		else
//		{
//			if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//			{
//				printf("Thang 2 cua nam %d co 29 ngay", n);
//			}
//			else
//			{
//				printf("Thang 2 cua nam %d co 28 ngay", n);
//			}
//		}
//	}
	
	//cach2 : switch case
	switch(m)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			printf("Thang %d cua nam %d co 31 ngay", m, n);
			break;
		case 4: 
		case 6: 
		case 9: 
		case 11: 
			printf("Thang %d cua nam %d co 30 ngay", m, n);
			break;
		case 2:
			if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
			{
				printf("Thang 2 cua nam %d co 29 ngay", n);
			}
			else
			{
				printf("Thang 2 cua nam %d co 28 ngay", n);
			}
			break;
		default:
			printf("Nhap sai thang");
			break;
	}
	return 0;
}

