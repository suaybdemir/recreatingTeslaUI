import QtQuick 2.15

Item {
    property string fontColor: "#f0eded"

    Connections{
        target: audioController
        function onVolumeLevelChanged()
        {
            visibileTimer.stop();
            volumeIcon.visible = false;
            visibileTimer.start()
        }
    }

    Timer{
        id: visibileTimer
        interval: 500
        repeat: false
        onTriggered:{
            volumeIcon.visible = true
        }
    }

    width: 120 * (parent.width/1280)

    Rectangle{
        id: decrementButton
        anchors{
            right:volumeIcon.left
            rightMargin: 15
            top:parent.top
            bottom:parent.bottom
        }
        width: height/2
        color: "black"
        Text {
            id: decrementText
            color: fontColor
            anchors.centerIn: parent
            text : "<"
            font.pixelSize: 12
        }
        MouseArea{
            anchors.fill: parent
            onClicked: audioController.incrementVolume(-5)
        }

    }

    Image {
        id: volumeIcon
        height: parent.height *.5
        fillMode: Image.PreserveAspectFit
        anchors{
            right: incrementButton.left
            rightMargin : 15
            verticalCenter: parent.verticalCenter
        }
        source: {
            if(audioController.volumeLevel <= 1) return "qrc:/ui/assets/volume0.png"
            if(audioController.volumeLevel <= 50 ) return "qrc:/ui/assets/volume1.png"
            if(audioController.volumeLevel > 50) return "qrc:/ui/assets/volume2.png"
        }
    }

    Text {
        id: volumeTextLabel
        visible: !volumeIcon.visible
        anchors{
            centerIn: volumeIcon
        }
        color: fontColor
        font.pixelSize: 24
        text: audioController.volumeLevel
    }

    Timer{
        id: visibleTimer
        interval: 500
        repeat: false
        onTriggered:{
            volumeIcon.visible = true;
        }

    }

    Rectangle{
        id: incrementButton
        anchors{
            right: parent.right
            rightMargin: 15
            top:parent.top
            bottom:parent.bottom
        }
        width: height/2
        color: "black"
        Text {
            id: incrementText
            color: fontColor
            anchors.centerIn: parent
            text : ">"
            font.pixelSize: 12
        }
        MouseArea{
            anchors.fill: parent
            onClicked: audioController.incrementVolume(5)
        }

    }
}
