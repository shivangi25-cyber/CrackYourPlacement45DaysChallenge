#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	
	// Initialize v with an initialization list
	v.assign({1, 2, 3 });
	cout << "The list is:" << endl;
	for (auto i = v.begin(); i != v.end(); i++) 
	{
		// Printing 1 2 3 as output
		cout << *i << " "; 
	}
	return 0;
}
