#include "mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Main Window"));

    open_action = new QAction(QIcon(":/images/doc-open"),tr("&Open..."),this); //新建action（图标，名字，this指针）
    open_action->setShortcut(QKeySequence::Open); //设置快捷点（快捷点为open）
    open_action->setStatusTip(tr("Open an existing file")); //设置status bar（状态栏）显示的文字
    connect(open_action,&QAction::triggered,this,&MainWindow::open); //信号槽（点击action -> MainWindow里的open函数）

    QMenu *file = menuBar()->addMenu(tr("&Files")); //新建菜单栏
    file->addAction(open_action); //添加action动作

    QToolBar *toolbar = addToolBar(tr("&File")); //新建工具栏
    toolbar->addAction(open_action); //添加action动作

    statusBar(); //新建状态栏
}

MainWindow::~MainWindow()
{

}

void MainWindow::open()
{
    QMessageBox::information(this,tr("text"),tr("Open succeed")); //open_action的动作，弹出消息框（this指针，消息框标题，消息框内容）
}
