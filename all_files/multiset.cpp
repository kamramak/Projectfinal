#include<iostream>
#include<set>
#include<vector>

using namespace std;

class Student
{
	public:
		int id;
		string name;

		void print_student() const
		{
			cout << "[ name = " << name <<", id = " << id << "]\n" <<endl;
		}

		bool operator < (const Student& other) const{
			return (this->id < other.id);
		}
};

int main()
{
	multiset<int> s = {10,20,5,10,15,20,4};
	cout << "size = "<<s.size() << endl;

	s.insert(100);
	s.insert(10);
	cout << "size = "<<s.size() << endl;

	for(auto& el: s)
		cout << el <<" ";
	cout <<endl;
	// erase the list element.
	int num_erase = s.erase(10);
	cout << "num_erase = "<< num_erase <<endl;

	for (auto& el: s)
		cout <<el << " ";
	cout << endl;
	// using upper bound function
	auto ub = s.upper_bound(10);
	// using lower bound function
	auto lb = s.lower_bound(15);

	cout << "ub = "<<*ub <<endl;
	cout << "lb = "<<*lb <<endl;
	// Insert the values into the set
	s.insert({-10,-30,-20});
	for(auto& el: s)
		cout <<el <<" ";
	cout << endl;

	vector<int> v = {10,20,15,5,4};
	s.insert(v.begin(),v.end());
	for(auto& el: s)
		cout<< el <<" ";
	cout << endl;


	//-----student class -----------
	multiset<Student> sst = {{50, "Simon"},{20,"Thomas"},{50,"simon_junior"}};
	for(auto& st: sst)
		st.print_student();


	return 0;

}
