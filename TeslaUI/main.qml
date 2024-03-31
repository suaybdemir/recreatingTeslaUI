import QtQuick 2.12
import QtQuick.Window 2.12


import "ui/LeftScreen"
import "ui/RightScreen"
import "ui/BottomBar"
Window {
    width: 1280
    height: 1024
    visible: true
    title: qsTr("Tesla")

    LeftScreen
    {
        id: leftScreen
    }
    RightScreen
    {
        id:rightScreen
    }
    BottomBar{
        id: bottomBar
    }



}
