#include "test.h"

Test::Test()
{
	text = "emty";
}
void Test:: show_text()
{
	cout << text << endl;
}
string Test:: get_text()
{
	return text;
}
void Test::set_text(string text)
{
	this->text = text;
}