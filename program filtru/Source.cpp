#include <iostream>
#include <ctype.h>

using namespace std;

void main(void){
	char litera;
	while((litera=cin.get() ) !=-1)
		cout.put(toupper(litera));
	system("pause");
}