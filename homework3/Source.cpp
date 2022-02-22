#include <stack>
#include <vector>
#include <iostream>
using namespace std;
void printStack(stack <int> &s)
{
	//int *st = &s.top();
	vector <int> vec(s.size());
	stack <int> s1 = s;
	for(int i = 0; i < s.size(); i++)
	{
		vec[i] = s1.top();
		s1.pop();
	}
	for(int i = s.size() - 1; i >=0; i--)
	{
		cout << vec[i] << ' ';
	}
}
int main()
{
	stack <int> s;
	for (int i = 5; i < 10; i++)
	{
		s.push(i);
	}
	printStack(s);
	printStack(s);
}