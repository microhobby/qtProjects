import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.VirtualKeyboard 2.3
import QtQuick.Controls 2.3

Window {
    id: window
    visible: true
    width: 320
    height: 320
    title: qsTr("Hello World")

    InputPanel {
        id: inputPanel
        z: 99
        x: 0
        y: window.height
        width: window.width

        states: State {
            name: "visible"
            when: inputPanel.active
            PropertyChanges {
                target: inputPanel
                y: window.height - inputPanel.height
            }
        }
        transitions: Transition {
            from: ""
            to: "visible"
            reversible: true
            ParallelAnimation {
                NumberAnimation {
                    properties: "y"
                    duration: 250
                    easing.type: Easing.InOutQuad
                }
            }
        }
    }

    Text {
        id: element
        x: 6
        y: 9
        width: 304
        height: 17
        text: qsTr("Text")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 6
        y: 274
        width: 304
        height: 40
        text: qsTr("Button")
        onClicked: element.text = "Hello World From Docker with X"
        onDoubleClicked: element.text = "This is a double click"
    }
}
