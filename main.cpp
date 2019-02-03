#include <QCoreApplication>
#include <managementalgorithm.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int stam=2000;
    AlgNotificationTypes stam2=AlgModStartedForConstruction;
    ManagementAlgorithm ma;
    ma.Cons_InitiateSensorLocationReporting(stam);
    ma.ProcessSensorLocUpdate(stam);
    ma.LoadOrthophoto(stam);
    ma.LoadWPSModel(stam);
    ma.Cons_PrepareForModelConstruction(stam, stam);
    ma.ProcessNotification(stam2);
    ma.QueryCloud(stam, stam);
    ma.Cons_StopModelConstruction();
    ma.StopUdatingLoc();
    //ma.Al_StoreWPS_ModelData(stam);
    //ma.Al_UploadWPSData(stam);
    return a.exec();
}
