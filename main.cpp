#include <QApplication>

#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QDeclarativeView>
#else
#include <QQuickView>
#endif

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
    QDeclarativeView viewer;
#else
    QQuickView viewer;
#endif

    const char *source = "D:\\Document\\workspace\\QtComponent\\Calendar2\\Calendar.qml";
    Qt::WindowFlags flag = Qt::Dialog |
                           Qt::WindowTitleHint |
                           Qt::WindowCloseButtonHint |
                           Qt::CustomizeWindowHint |
                           Qt::WindowSystemMenuHint;
    viewer.setTitle(QStringLiteral("Calendar(日历)控件@Qt君"));
    viewer.setFlags(flag);
//    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.resize(QSize(640, 480));
    viewer.setSource(QUrl::fromLocalFile(QLatin1String(source)));
    viewer.show();
    return app.exec();
}
