// By Biraj Raj Thapa
#include <iostream>
#include <vector>
using namespace std;
class stack
{
	public:
		vector<int> data;
	
	 void isempty() {
	 	if (data.empty())
		 	cout << "Stack is empty." << endl;
		else
			cout << "Stack is not empty." << endl;	  
	 }
	 
	 void push_data ()
	 {
	 	data.push_back(1);
	 	data.push_back(2);
	 	data.push_back(3);
	 	data.push_back(4);
	 	data.push_back(5);
	
	 	cout << "Adding new data elements." << endl;
	 }
	 
	 void pop_data ()
	 {
	 	data.pop_back();
	 	cout << "Deleting 1 newly added data element." << endl;
	 }
	 
	 void isfull () {
	 	if (data.size() == data.max_size())
	 		cout << "stack is full." << endl;
	 	else 
		    cout << "stack is not full." << endl;	
	 }
	     
	  void Peek ()
	  {
	        cout << "The Top Element is" << " " << data.back();
	  }
        

};
int main ()

{
	stack assignment;
	assignment.isempty();
	assignment.push_data();
	assignment.pop_data();
	assignment.isfull();
	assignment.Peek();
}
