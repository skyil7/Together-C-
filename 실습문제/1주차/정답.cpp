#include <iostream>
using namespace std;


int samyookToTen(char c)//0~9, A~B 를 입력받아서 36진수에서 몇인지 알려주는 함수
{
	if (c >= 'A' && c <= 'Z')
	{
		return c - 'A' + 10;
	}
	else {
		return c - '0';
	}
}

void main()
{
	int n,len,t=0;
	char c;
	string str[50];//문자열을 담는 string 변수
	int result[50];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < n; i++)
	{
		len = str[i].length();//문자열의 길이를 구하는 함수
		result[i] = 0;//결과값 초기화
		for (int j = len-1; j >= 0; j--)//문자열을 뒤에서 부터 자름
		{
			c = str[i].c_str()[j];//str[i]를 char[]형식으로 변환 후, 필요한 자리의 char 값을 c에 저장
			result[i] += samyookToTen(c) * pow(36,t);//c가 36진수에서 몇인지 찾아서 자릿수에 맞게 변환 후 result에 누적
			t++;//자릿수 하나 올림
		}
		t = 0;//자릿수 변수 t 초기화
	}

	for (int i = 0; i < n; i++)
	{
		cout << result[i] << endl;
	}
}
