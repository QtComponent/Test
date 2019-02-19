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

    const char *source = "c:\\Users\\Strong\\Documents\\workspace\\QtComponent\\ScrollBar\\Test\\Test1.qml";
    Qt::WindowFlags flag = Qt::Dialog |
                           Qt::MSWindowsFixedSizeDialogHint |
                           Qt::WindowTitleHint |
                           Qt::WindowCloseButtonHint |
                           Qt::CustomizeWindowHint |
                           Qt::WindowSystemMenuHint;
    viewer.setFlags(flag);
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.resize(QSize(480, 320));
    viewer.setSource(QUrl::fromLocalFile(QLatin1String(source)));
    viewer.show();
    return app.exec();
}
