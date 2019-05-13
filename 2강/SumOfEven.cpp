#include <iostream>
using namespace std;

/*
	양수 자연수 num을 입력받아 1 ~ num 사이의 짝수들의 합을 출력하는 프로그램 
*/

void main()
{
	int num, sum = 0;

	do //일단 한번 실행하고
	{
		cout << "Input Number : ";
		cin >> num;//입력받은 값을 >> 로 num에 전달
	} while (num <= 0);//조건에 부합하면 반복

	for (int i = 1; i <= num; i++)//1~num까지 반복하는 반복문
	{
		if (i % 2 == 0)//i가 짝수일 때
		{
			sum += i;
		}
	}
	cout << "Sum is " << sum;
}