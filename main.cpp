#include <QApplication>
#include <QWidget>

#include <iostream>
#include <iomanip>

#include <inttypes.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto setw = std::setw(20);

    for (std::size_t i = 1; ; ++i)
    {
        QWidget w;

        auto wid  = static_cast<std::int64_t>(w.winId());
        auto uwid = static_cast<std::uint32_t>(wid);

        std::cout << setw << "#" << i
                  << setw << wid
                  << setw << uwid
                  << setw << std::hex << wid << std::dec
                  << std::endl;

        if (wid < 0) w.show(), a.exec();
    }
}
