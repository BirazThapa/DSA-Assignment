// By Biraj Raj Thapa
#include <iostream>
#include <vector>
#define MAX 5 
using namespace std;
class stack
{
	public:
		vector<int> data;
	 void Push ()
	 {
	 	int dat;
	 	if (data.size() != MAX)
	 	{
	 	cout << "Enter New Data Element:";   
	 	cin >> dat;
	 	data.push_back(dat);
	 	cout << "Data Added \n";
	 }
	 	else 
	 		cout << "stack is full";
	 }
	 
	 void Pop ()
	 {
	 	data.pop_back();

	 }
	 
	  void Display ()
	  {
	     
	      if (!data.empty())
	      {
	      cout << "The Stack is.. \n";
	 
             for(int i; i < data.size(); i++)
                 {
        
                     cout << data[i] << "\n";
                 }
	      }
	  else 
	    cout << "Stack is empty..\n";
}    

};
int main ()

{
 stack s;
 int ch = 0;
 while (ch!=4)
 {
	cout << "Stack Menu\n 1.) Push \n 2.) Pop \n 3.) Display \n 4.) Exit \n" ;
	cout << "Enter Choice (1-4)";
	cin >> ch;
	switch (ch)
	{
		case 1: s.Push();
		break;
		case 2: s.Pop();
		break;
		case 3: s.Display();
		break;
		case 4: 
		ch = 4;
		break;
		default:
		cout << "Wrong choice";	
	}
 }
}
