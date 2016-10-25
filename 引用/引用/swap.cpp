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
/*第一次实参没有变化，实参只是将值传递给了形参，第二次形参是被设定为指向实参的引用，相当于实参的代号，对其所做的操作将直接影响到实参*/