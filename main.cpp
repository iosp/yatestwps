#include <QCoreApplication>
#include <managementalgorithm.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int stam=2000;
    AlgBuildingNotificationTypes stam2=AlgModInit;
    ManagementAlgorithm ma;
    ma.Cons_InitiateSensorLocationReporting(stam, stam);
    ma.ProcessSensorLocUpdate(stam);
    ma.Cons_PrepareForModelConstruction(stam, stam);
    ma.ProcessNotification(stam2);
    ma.Cons_StopModelConstruction();
    ma.StopUdatingLocation();
    return a.exec();
}
