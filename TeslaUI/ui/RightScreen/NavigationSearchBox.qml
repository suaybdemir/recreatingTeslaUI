import QtQuick 2.15

Rectangle
{
    id:navSearchBox
    radius:5

    color: "#f0f0f0"

    Image{
        id: searchIcon
        source: "qrc:/ui/assets/search.png"

        anchors{
            left: parent.left
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }

        height: parent.height *.5
        fillMode: Image.PreserveAspectFit

    }

    Text{
        id:navigationPlaceHolderText
        color:"black"
        text: "Navigate"
        anchors{
            verticalCenter: parent.verticalCenter
            left: searchIcon.right
            leftMargin: 20
        }
    }
}
