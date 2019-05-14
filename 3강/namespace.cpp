#include <iostream>
#include <string>
using namespace std;

namespace paik//백가놈
{
	string name = "Gio";//백지오
}

namespace kim//김가놈
{
	string name = "Yuri";//김유리
}

using namespace paik;//이제부터 백가놈은 성씨빼고 부른다!

void main()
{
	cout << name << endl;//그냥 호출시 using namespace에 의해 백지오 호출
	cout << kim::name;//kim을 명시하고 호출시 김유리 호출

}