#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Student{
	int age;
	int id;
};
int main()
{
	/*priority_queue<int> Q;
	vector<int> v = {8,1,6,4,0,7,2,9};
	//decending order of elements.
	for(int x : v)Q.push(x);
	while(!Q.empty()){
		cout << Q.top() << " ";
		Q.pop();
	}

	cout << endl;*/
	// New pripority queue
	/*priority_queue<int, vector<int>, std::greater<int>> Q;
	//Ascending oreder of queue
	vector<int> v = {8,1,6,4,0,7,2,9};
	for(int x : v)Q.push(x);
	while(!Q.empty()){
		cout << Q.top() << " ";
		Q.pop();
	}

	cout << endl;*/

	auto cmp = [](int a, int b){
		return a < b;
	};

	priority_queue<int, vector<int>, decltype(cmp)> Q(cmp);
	vector<int> v = {8,1,6,4,0,7,2,9};
	for(int x : v)Q.push(x);
	while(!Q.empty()){
		cout << Q.top() << " ";
		Q.pop();
	}

	cout << endl;
	return 0;
}
