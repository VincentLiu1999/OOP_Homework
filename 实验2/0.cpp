#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float a, b, c;
	cout << "请输入a,b,c:";
	while (cin >> a >> b >> c){
		float t = b * b - 4 * a * c;
		if (a == 0)if (b == 0)if (c == 0)cout << "方程的根为一切实数" << endl;
		else cout << "方程无根" << endl;
		else cout << "根是:" << -c / b << endl;
		else if (t > 0)cout << "根x1=" << (-b + sqrt(b)) / (-2 * a) << endl << "根x2=" << (-b - sqrt(b)) / (-2 * a) << endl;
		else if (t == 0)cout << "根x1=x2=" << (-b + sqrt(b)) / (-2 * a) << endl;
		else cout << "根x1=" << (-b / (-2 * a)) << "+" << "(" << sqrt(-t) / (-2 * a) << ")i" << endl << "根x1=" << (-b / (-2 * a)) << "+" << "(" << sqrt(-t) / (-2 * a) << ")i" << endl;
		return 0;
	}
}