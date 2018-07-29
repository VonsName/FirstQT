#include <QApplication>
#include <QWidget>
#include <QPushButton>
int main(int argc,char **argv){

    //应用程序
    QApplication a(argc,argv);
    //窗口
    QWidget w;
    //设置标题
    w.setWindowTitle(QString("测试你你"));


    //button
    QPushButton b;
    //设置按钮内容
    b.setText(QString("按钮"));
    //b.show();
    //设置父窗口
    b.setParent(&w);
    b.move(100,100);

    //通过构造函数设置父窗口
    QPushButton b1(&w);
    b1.setText(QString("测试2按钮"));
    w.show();
    a.exec();
    return 0;
}
