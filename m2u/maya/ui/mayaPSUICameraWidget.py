"""
A maya specific PySide2 based UI Widget for Camera-Setup functionality.

This Widget will be integrated into the m2uMainWindow by the common UI.

"""

import os

from m2u.maya import cameras

from PySide2 import QtWidgets
from PySide2 import QtGui

thispath = os.path.dirname(os.path.realpath(__file__))
icoCamera = QtGui.QIcon(os.path.join(thispath, "icoCamera.png"))


class mayaPSUICameraWidget(QtWidgets.QWidget):
    def __init__(self, *args, **kwargs):
        super(mayaPSUICameraWidget, self).__init__(*args, **kwargs)

        self.buildUI()
        self.connectUI()

    def buildUI(self):
        self.setupCameraBtn = QtWidgets.QPushButton(text="Setup Cameras")
        self.setupCameraBtn.setIcon(icoCamera)
        tooltip = ("Set clip planes, FOV and positions of Maya's default "
                   "cameras to work better with game engine dimensions.")
        self.setupCameraBtn.setToolTip(tooltip)

        layout = QtWidgets.QHBoxLayout()
        layout.addWidget(self.setupCameraBtn)
        layout.setContentsMargins(1, 1, 1, 1)
        layout.addStretch()
        self.setLayout(layout)

    def connectUI(self):
        self.setupCameraBtn.clicked.connect(self.setupCameraBtnClicked)

    def setupCameraBtnClicked(self):
        cameras.setup_cameras_for_large_scale_scenes()
