#include<iostream>
#include<memory>

using namespace std;
int main()
{
	int* p = new int(1);	
	auto_ptr<int> A1(p);
	*(A1.get()) = 2;
	cout << *p << endl;
	
}
