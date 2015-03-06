#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]){
	QApplication app(argc,argv);

	QLabel label("hello qt!");
	label.setMinimumSize(100,100);
	label.show();	
	
	return app.exec();
}
