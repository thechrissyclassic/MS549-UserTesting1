#include <iostream>
#include <string>
//below is the library for the assert command
#include <cassert>

using namespace std;

string greeting(string name)
{

	return "Hello " + name + "!";
}

int main()
{

	//test #1 : This is going to test whether it is true or not
	assert(greeting("Chris") == "Hello Chris");
	return 0;
}