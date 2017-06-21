/*
Write a program to print all the numbers from n1 to n2, where n1 and n2 are two 
numbers specified by the user. (Hint: You’ll need to prompt for two values n1 and n2; 
then, initialize i to n1 and use n2 in the loop condition.)

*/

#include "stdafx.h"
#include <iostream> 
using namespace std;

int main() {
	int start = 0;
	int end = 0;
	
	cout << "Enter a number for \"start\" and press ENTER: ";
	cin >> start;
	cout << "Enter a number for \"end\" and press ENTER: ";
	cin >> end;
	
	while (start <= end) {  // While i less than or equal n, 
		cout << start << " ";   //   Print i, 
		start += 1;          //   Add 1 to i.    
	}
	cout << endl << endl;
	return 0;
}


