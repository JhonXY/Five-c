#include<iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int&x, int&y);
int main()
{
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "my socre: " << myScore << "\n";
	cout << "yoursocre: " << yourScore << "\n\n";
	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	cout << "myscore: " << myScore << "\n";
	cout << "yourscore: " << yourScore << "\n\n";
	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n";
	return 0;
}
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void goodSwap(int&x, int&y)
{
	int temp = x;
	x = y;
	y = temp;
}
/*��һ��ʵ��û�б仯��ʵ��ֻ�ǽ�ֵ���ݸ����βΣ��ڶ����β��Ǳ��趨Ϊָ��ʵ�ε����ã��൱��ʵ�εĴ��ţ����������Ĳ�����ֱ��Ӱ�쵽ʵ��*/