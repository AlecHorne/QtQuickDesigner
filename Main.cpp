#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
   QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

   // Create application and engine objects
   QGuiApplication app(argc, argv);
   QQmlApplicationEngine engine;

   // Load the main application window
   engine.load("qrc:/main.qml");

   return app.exec();
}
