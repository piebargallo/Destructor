// Example constructor and destructor. 
#include<iostream>
using namespace std;
 
 // Def class Test
class Test {

	public:
		// Constructor
		Test() {
			
			cout<<"\n Constructor executed";
	
		}
		
		// Destructor
		~Test() {
			
			cout<<"\n Destructor executed";
		
		}

}; // End class Test

// Driver program
main() {
	
	Test t;
	
	return 0;

} // End driver

