import QtQuick 2.15

Item {
    property string fontColor: "#f0eded"
    property var hvacController

    width: 90 * (parent.width / 1280)

    // Rectangle{
    //     anchors{
    //         left: decrementButton.left
    //         right: incrementButton.right
    //     }

    //     Component.onCompleted: console.log(width)
    // }

    Rectangle{
        id: decrementButton
        anchors{
            left:parent.left
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
            onClicked: hvacController.incrementTargetTemperature(-1)
        }

    }

    Text {
        id: targetTemperatureText
        anchors{
            left: decrementButton.right
            leftMargin : 15
            verticalCenter: parent.verticalCenter
        }
        color: fontColor
        font.pixelSize: 24
        text: hvacController.TargetTemperature
    }

    Rectangle{
        id: incrementButton
        anchors{
            left: targetTemperatureText.right
            leftMargin: 15
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
            onClicked: hvacController.incrementTargetTemperature(1)
        }

    }
}
