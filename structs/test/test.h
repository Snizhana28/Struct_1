#include "../../library/library.h"

struct Test
{
private :
	string text;
public :
	Test();
	void show_text();
	string get_text();          //getter
	void set_text(string text); //setter

};
