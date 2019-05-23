#include <iostream>
#define SUM(a,b) a+b
#define FOR(a,b) for(int i = a;i<=b;i++)
using namespace std;

inline int GOB(int a, int b) { return a * b; }

int main()
{
	cout << SUM(2, 5) << endl;
	//cout << SUM("HI", 5) << endl;
	cout << GOB(2, 5) << endl;
	//cout << GOB("HI", 5) << endl;

	//주석 부분을 활용해서 인라인함수와 매크로의 차이를 알아보세요!

	FOR(1, 10)
		cout << i << endl;
	
}