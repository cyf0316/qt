#include <iostream>
using namespace::std;

class String{
public:
	String(const char *n){
		cout << "String(const char *n)" << endl;
	}
	
	String(const String &o){
		cout << "String(const String &o)" << endl;
	}
	
	
};

int main(int argc, char *argv[]){
	String s1 = "abcdef";
	String s2 = s1;

	return 0;
}
