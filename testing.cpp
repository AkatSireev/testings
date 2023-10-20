#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, k1;
	float x, y;
	cout << "введите количество людей:…";
	cin >> n;
	cout << "рейтинг фильма на данный момент:";
	cin >> x;
	cout << "желаемый рейтинг: ";
	cin >> y;
	k1 = (n * (y - x)) / (1 - y);
	cout << "необходимо поставить "<< k1 << " единиц";
	return 0;
}
