#include <QApplication>
#include "./ui_remote.h"
#include "remotemainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    RemoteMainWindow window(nullptr);
    Ui::MainWindow remote;
    remote.setupUi(& window);
    window.lineEdit = remote.lineEdit;
    window.resize(240, 680);
    window.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    window.setMaximumHeight(680);
    window.setMaximumWidth(240);
    window.show();
    return QApplication::exec();
}
