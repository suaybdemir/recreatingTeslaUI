import QtQuick 2.15

Rectangle{
    id:leftScreen

    anchors{
        left: parent.left
        right:rightScreen.left
        bottom: bottomBar.top
        top:parent.top
    }

    color:"white"

    Image{
        id:carRender
        anchors.centerIn:parent
        width:parent.width * .75
        fillMode:Image.PreserveAspectFit
        source:"qrc:/ui/assets/carRender.jpg"
    }

}
