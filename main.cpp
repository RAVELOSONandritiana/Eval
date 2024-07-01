#include <iostream>
#include "Eval.hpp"
using namespace std;

int main(){

	Eval *e = new Eval();
	e->setEval("-2/2*2");
	cout << e->calc() << endl;
	return 0;
}

