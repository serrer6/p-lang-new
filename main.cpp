#include<bits/stdc++.h>
#include <windows.h>
using namespace std;

void Foo(string input_print) {
	cout << input_print << endl;
}
int main() {
	string input;
	cout<< "This is p/p++ on win32/64 wzd & jyh have"<<endl;
	cout << "Hello! This is a console application." << endl;
	cout << "Press exit() to quit, press a to execute foo." << endl;	
	string say;
	while(1) {
		cout<<">>>  ";
		cin >> input;
		if(input == "print") {
			cin>>say;
			Foo(say);
		} else if(input == "exit()") {
			break;
		} else if(input == "theme.hack") {
			system("color 0A");
		} else if(input == "theme.visual_stdio_2019") {
			system("color F0");
		} else if(input == "theme.visual_stdio_code") {
			system("color 0F");
		}else if(input == "theme.defint"){
			system("color 07");
		}else if(input != "\n") {
			cout << "Unknown command '" << input << "'! Ignoring...\n";
		}
	}

	return 0;
}
