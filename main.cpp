#include <QtCore/QApplication>
#include "demo.hpp"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Demo::CWidget widget;
    widget.show();

    return app.exec();
}
