#include "cat.h"
#include <QApplication>
//the name of the program is cat cause I like cat hahh...

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//创建并且定义应用程序
    cat w;//定义并且创建窗口
    w.show();//显示

    return a.exec();//应用程序运行
}
