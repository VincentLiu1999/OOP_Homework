#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float a, b, c;
	cout << "������a,b,c:";
	while (cin >> a >> b >> c){
		float t = b * b - 4 * a * c;
		if (a == 0)if (b == 0)if (c == 0)cout << "���̵ĸ�Ϊһ��ʵ��" << endl;
		else cout << "�����޸�" << endl;
		else cout << "����:" << -c / b << endl;
		else if (t > 0)cout << "��x1=" << (-b + sqrt(b)) / (-2 * a) << endl << "��x2=" << (-b - sqrt(b)) / (-2 * a) << endl;
		else if (t == 0)cout << "��x1=x2=" << (-b + sqrt(b)) / (-2 * a) << endl;
		else cout << "��x1=" << (-b / (-2 * a)) << "+" << "(" << sqrt(-t) / (-2 * a) << ")i" << endl << "��x1=" << (-b / (-2 * a)) << "+" << "(" << sqrt(-t) / (-2 * a) << ")i" << endl;
		return 0;
	}
}