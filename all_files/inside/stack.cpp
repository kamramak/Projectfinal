
#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> S;

	for (int i = 0; i<5;++i)
		S.push(i);
	cout << "Size = "<<S.size() <<endl;
	cout << "Top = " <<S.top() <<endl;

	S.pop();
	S.pop();
	cout << "Size = "<<S.size() <<endl;
	cout << "Top = " <<S.top() <<endl;

	if(S.empty())
		cout << "Stack is empty " <<endl;
	else
		cout <<"Not empty" <<endl;

	return 0;
}
