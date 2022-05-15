import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import MatsyaUI 1.0 as MatsyaUI
import Matsya.TextEditor 1.0

MatsyaUI.Window {
    id: root
    width: 640
    height: 480
    minimumWidth: 300
    minimumHeight: 300
    visible: true
    title: qsTr("Text Editor")

    FileHelper {
        id: fileHelper

        onNewPath: {
            _tabView.addTab(textEditorCompeont, { fileUrl: path })
        }
    }

    headerItem: Item {
        Rectangle {
            anchors.fill: parent
            color: MatsyaUI.Theme.backgroundColor
        }

        MatsyaUI.TabBar {
            id: _tabbar
            anchors.fill: parent
            anchors.margins: MatsyaUI.Units.smallSpacing / 2
            anchors.rightMargin: MatsyaUI.Units.largeSpacing * 4

            model: _tabView.count
            currentIndex : _tabView.currentIndex

            onNewTabClicked: {
                addTab()
            }

            delegate: MatsyaUI.TabButton {
                id: _tabBtn
                text: _tabView.contentModel.get(index).tabName
                implicitHeight: _tabbar.height
                implicitWidth: Math.min(_tabbar.width / _tabbar.count,
                                        _tabBtn.contentWidth)

                ToolTip.delay: 1000
                ToolTip.timeout: 5000

                checked: _tabView.currentIndex === index

                ToolTip.visible: hovered
                ToolTip.text: _tabView.contentModel.get(index).fileUrl

                onClicked: {
                    _tabView.currentIndex = index
                    _tabView.currentItem.forceActiveFocus()
                }

                onCloseClicked: {
                    _tabView.closeTab(index)
                }
            }
        }
    }

    DropArea {
        id: _dropArea
        anchors.fill: parent

        onDropped: {
            if (drop.hasUrls) {
                for (var i = 0; i < drop.urls.length; ++i) {
                    fileHelper.addPath(drop.urls[i])
                }
            }
        }
    }

    ColumnLayout {
        anchors.fill: parent
        spacing: 0

        MatsyaUI.TabView {
            id: _tabView
            Layout.fillWidth: true
            Layout.fillHeight: true
        }

        Item {
            id: _bottomItem
            z: 999
            Layout.fillWidth: true
            Layout.preferredHeight: 20 + MatsyaUI.Units.smallSpacing

            Rectangle {
                anchors.fill: parent
                color: MatsyaUI.Theme.backgroundColor
            }

            ColumnLayout {
                anchors.fill: parent
                anchors.leftMargin: MatsyaUI.Units.smallSpacing
                anchors.rightMargin: MatsyaUI.Units.smallSpacing
                anchors.bottomMargin: MatsyaUI.Units.smallSpacing

                Label {
                    text: _tabView.currentItem ? qsTr("Characters %1").arg(_tabView.currentItem.characterCount)
                                               : ""
                }
            }
        }
    }

    function addPath(path) {
        _tabView.addTab(textEditorCompeont, { fileUrl: path })
    }

    function addTab() {
        _tabView.addTab(textEditorCompeont, {})
    }

    Component {
        id: textEditorCompeont

        TextEditor {
            fileUrl: "file:///home/tokyo/winepath"
        }
    }

    Component.onCompleted: {
        // addTab()
    }
}
