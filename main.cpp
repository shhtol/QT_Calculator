#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator calculator;
    calculator.setWindowTitle("Calculator");
    calculator.resize(220, 220);
    calculator.show();
    return a.exec();
}
