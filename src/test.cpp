#include <iostream>
#include <vector>
#include <stack>
#include "composite.h"
//#include "testiterator.h"
using namespace std;

int main() {

	Op* op3 = new Op(3);
	Op* op4 = new Op(4);
	Op* op2 = new Op(2);
	Add* add = new Add(op3, op4);
	Sqr* sqr = new Sqr(op2);
	Sub* sub = new Sub(add, sqr);
	Root* root = new Root(sub);
	// Root* root = new Root(add);


	cout << "--- PreOrder Iteration ---" << endl;
	PreorderIterator* pre_itr = new PreorderIterator(root);
	//cout << "size: " << pre_itr->current(); 
	//cout << "top of stack: " << pre_itr->current() << endl; 
	//pre_itr->current(); 
	//cout << "before for loop\n"; 
	for (pre_itr->first(); !pre_itr->is_done(); pre_itr->next()) {
		//cout << "goes inside the for loop\n"; 
		//pre_itr->current(); 
		//cout << "After current\n"; 
		pre_itr->current()->print(); 
		cout << endl;
	}

	// cout << "called first function,"; 
	//pre_itr->first(); //works when i call first function 
	//pre_itr->next(); //works when i call next function 
	// pre_itr->first(); 
	//pre_itr->current();
	//pre_itr->current()->print(); //works when I call this function 

	return 0; 
}  
