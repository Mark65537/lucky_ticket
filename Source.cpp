#include <stdio.h>
#include <conio.h>
#include <windows.h>

int total,i;

int sum(int n) {
	 total = 0;
      do
		{
			total += n % 10;
			
		}while (n /= 10;)
	  return total;
}

//int luck() {
//
//}

DWORD WINAPI ThreadFunc(PVOID pvParam,int num) 	// DWORD WINAPI � ������� ������ 
										// ���������� ��������, ������� ������������ ��� ��� ���������� ������
{
	int mid1=0,mid2=0,tnum,i=0;
	// ��������� ���������� ������ ������ � ���������� ������
	tnum = *((int *)pvParam); // � num ������ �������� ���������� ����� ������
	printf("thread %d: start!\n", tnum);
	while (mid1 != num && mid2 != num) {
		if (mid1 < 10 || mid2 < 10) {
			if (mid1 == mid2) {
				i++;
			}
		}
		else {
			if (sum(mid1) == sum(mid2)) {
				i++;
			}
		}

			mid1++; mid2++;
	}
	DWORD dwResult_th = tnum; // ���������� � ������������� ����������, 
							 // ���������� ��� ���������� ������, ��� ��������� � ���������� �������� ����� 
	return dwResult_th;
}


int main(int argc, char** argv) // ��� ��������� ������
{	
		CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
		CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
		system("pause");
		return 0;
	
	//int x[n]; // � ������� ����� ������� ������ ������ ���� ������
	//DWORD dwThreadId[n]; 	// � ��� ���������� 
	//						// ������� �������� ������ ���������� �������������, 
	//						// ����������� �������� ������ ������
	//DWORD dw; 	// ���������� ����������, ���� ������� �������� ���������� �������
	//			// ������ ��� ���������� 
	//DWORD dwResult_main[n]; 	// ���������� ����������, � ������� ����� ������
	//							// ��� ���������� ������
	//HANDLE hThread[n]; 	// ���������� ������� ���������� �������� ���� (�������)
	//int i, j, sum;
	//for (i = 0; i<n; i++)
	//	for (j = 0; j<n; j++)
	//		a[i][j] = ((i + 1)*(j + 1)) % 13;
	//// �������� ������� ��� ��������� ����� �������
	//for (i = 0; i<n; i++)
	//{
	//	x[i] = i;
	//	// ���������� �������� �������� �����, ������������ ������ � �������� ������,
	//	// � ����� ������ � ���������� ����� ��� �������� 
	//	hThread[i] = CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
	//	if (!hThread[i])
	//		printf("main process: thread %d not execute!", i);
	}
