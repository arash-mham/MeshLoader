#include<Qt\qapplication.h>
#include"GLWindow.h"
#include"Widget.h"
int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	Widget widge;
	widge.show();
//	GLWindow glWindow;
	//glWindow.show();
	return app.exec();
}