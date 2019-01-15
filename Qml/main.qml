import QtQuick 2.5
import QtQuick.Window 2.2
import "WheelView"

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Qtbig.com")

    Row {
        anchors.centerIn: parent
        spacing: 50

        WheelView {
            width: 100; height: 400
            model: [{ display: "0", value: 0 },
                { display: "1", value: 1 },
                { display: "2", value: 2 },
                { display: "3", value: 3 },
                { display: "4", value: 4 },
                { display: "5", value: 5 },
                { display: "6", value: 6 },
                { display: "7", value: 7 },
                { display: "8", value: 8 },
                { display: "9", value: 9 }]
            value: 1

            pathItemCount: 5
            displayFontSize: 70
        }

        WheelView {
            width: 100; height: 400
            model: {
                var list = [];
                for (var i = 0; i < 10; i++)
                    list.push({ display: i, value: i });
                return list;
            }
            value: 1

            pathItemCount: 5
            displayFontSize: 70
        }
    }
}
