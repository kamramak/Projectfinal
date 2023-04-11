#include<iostream>
#include<list>
#include<vector>

using namespace std;

void print_list(list<int>& ll){
	for(list<int>::iterator it = ll.begin(); it != ll.end(); ++it)
		cout <<*it << "\t";  //reference
	cout <<endl;
}

int main()
{
	//print the list values
	list<int> nums = {1,2,3,4,5};
	print_list(nums);
	//Size of list
	cout << "size = " << nums.size() << endl;
	// To create the new list
	list<int> nums2 =nums;
	print_list(nums2);
	//To display the list of front & back element.
	cout << "front = " << nums.front()  << ", back = " << nums.back() <<endl;
	//print the empty list
	cout << std::boolalpha << nums.empty() <<endl;
	//print the list of begin & rbegin values.
	cout << *nums.begin() <<", "  << *nums.rbegin() <<endl;
	//insert the value in list
	vector<int> vec = {1,2,3,4,5};
	vec.insert(vec.begin() + 2, 100);
	cout << vec[2] << endl;

	print_list(nums);
	list<int>::iterator it = nums.begin();
	while(*it !=3 && it != nums.end())
		it++;
	nums.insert(it,100);
	print_list(nums);
	//erase the list of element
	nums.erase(it);
	print_list(nums);
	//remove the list of element 4
	nums.remove(4);
	print_list(nums);
	//print the empty list
	nums.clear();
	print_list(nums);
	cout << std::boolalpha << nums.empty() <<endl;
	//print the nums2 values
	print_list(nums2);
	//list added the begin & end values in the list
	nums2.push_back(-100);
	nums2.push_front(-200);
	print_list(nums2);
	//print the orginal list
	nums2.pop_back();
	nums2.pop_front();
	print_list(nums2);
	return 0;
}
