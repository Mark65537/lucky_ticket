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

DWORD WINAPI ThreadFunc(PVOID pvParam,int num) 	// DWORD WINAPI – функция потока 
										// возвращает значение, которое используется как код завершения потока
{
	int mid1=0,mid2=0,tnum,i=0;
	// Помещение переданных потоку данных в переменные потока
	tnum = *((int *)pvParam); // в num теперь хранится порядковый номер потока
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
	DWORD dwResult_th = tnum; // объявление и инициализация переменной, 
							 // содержащей код завершения потока, его прочитает и обработает основной поток 
	return dwResult_th;
}


int main(int argc, char** argv) // код основного потока
{	
		CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
		CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
		system("pause");
		return 0;
	
	//int x[n]; // с помощью этого массива потоки узнают свои номера
	//DWORD dwThreadId[n]; 	// в эту переменную 
	//						// функция создания потока возвращает идентификатор, 
	//						// приписанный системой новому потоку
	//DWORD dw; 	// объявление переменной, куда функция ожидания завершения потоков
	//			// вернет код завершения 
	//DWORD dwResult_main[n]; 	// объявление переменной, в которую будет считан
	//							// код завершения потока
	//HANDLE hThread[n]; 	// объявление массива описателей объектов ядра (потоков)
	//int i, j, sum;
	//for (i = 0; i<n; i++)
	//	for (j = 0; j<n; j++)
	//		a[i][j] = ((i + 1)*(j + 1)) % 13;
	//// создание потоков для обработки строк массива
	//for (i = 0; i<n; i++)
	//{
	//	x[i] = i;
	//	// выделенный параметр содержит адрес, передаваемый потоку в качестве данных,
	//	// в нашем случае – порядковый номер его создания 
	//	hThread[i] = CreateThread(NULL, 0, ThreadFunc, (PVOID)&x[i], 0, &dwThreadId[i]);
	//	if (!hThread[i])
	//		printf("main process: thread %d not execute!", i);
	}
