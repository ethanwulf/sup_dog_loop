#include<iostream>


using namespace std;

void say_wassup() {
	cout << "Wassup,";
}
void say_dog() {
	say_wassup();
	cout << " Dog" << endl;
	
}

int main() {

	for (int i{ 1 }; i<= 10; ++i)
		say_dog();
	return 0; 

}