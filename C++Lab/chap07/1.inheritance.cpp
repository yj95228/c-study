#include <iostream>
#include "Person.h"
using namespace std;

int main01() {
	Person p("全辨悼", 21);
	p.print();

	Student s("笛府", 21, "富介乔快扁");
	s.print();
	return 0;
}