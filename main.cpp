#include <iostream>
#include <thread>
#include <Stack.h>

//This function will be called from a thread
using namespace std;
using namespace DataStructures; 
 void call_from_thread() {
	 Stack s; 
		try {
			if ( s.isEmpty() ) 
				{
				cout << "Stack is empty" << endl;    
				}
			// Push elements    
			s.Push(100);    
			s.Push(200);  
			s.Push(300);
			s.Push(400);
			//s.Push(500);
			// Size of stack
			cout << "Size of stack = " << s.Size() << endl;
			// Top element    
			cout << s.Top() << endl;    
			// Pop element    
			cout << s.Pop() << endl;
			// Pop element    
			cout << s.Pop() << endl;
			// Pop element    
			cout << s.Pop() << endl;
		}
		catch (...) {
			cout << "Some exception occured" << endl;
		}       
 
    }

    int main() {
        std::thread t1(call_from_thread);

        //Join the thread with the main thread
        t1.join();
		
		auto nthreads = std::thread::hardware_concurrency();
		
		std::cout<<"Number of Core: "<<nthreads<<std::endl;

        return 0;
    }

