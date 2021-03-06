#include "calibration_gui/gui_mainwindow.h"
#include "calibration_gui/gui_myrviz.h"

#include <QApplication>
#include <ros/ros.h>

// ====================================================================================
// References:
// http://wiki.ros.org/qt_create/Tutorials/Qt%20App%20Templates?action=show&redirect=qt_ros%252FTutorials%252FQt+App+Templates+-+Electric
// https://github.com/decoderdan/projectPhoenix/wiki/Creating-a-ROS-qt-gui-node
// https://github.com/dxydas/ros-bioloid
// https://github.com/dazhbog/tanky_gui

int main(int argc, char **argv)
{
    /*if( !ros::isInitialized() )
      {
        ros::init( argc, argv, "myviz", ros::init_options::AnonymousName );
      }*/
    QApplication a(argc, argv);
    QNode node(argc,argv, "calibration_gui");
    MainWindow w(&node);
    w.show();

    a.exec();

    return 0;
}
