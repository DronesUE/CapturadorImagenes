#include <QCoreApplication>
#include <iostream>
#include <QCamera>
#include <QCameraInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Cameras: " <<QCameraInfo::availableCameras().count() << std::endl;
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach (const QCameraInfo &cameraInfo, cameras)
        qDebug() << cameraInfo.deviceName();
    std::cout << "end." << std::endl;

    return a.exec();
}
