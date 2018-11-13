""" The program's main UI module.
"""

import logging

_lg = logging.getLogger(__name__)


def create_ui():
    """ Create the PySide2 based UI.
    """
    # Note: We try to dynamically load PySide2 here because this module
    #   is initialized before the Editor module is loaded, but both must
    #   exist before UI-creation.
    try:
        # The import is only to determine if PySide2 exists.
        import PySide2  # noqa
    except ImportError:
        _lg.error("Unable to load PySide2.")
        raise

    from m2u import ui
    from maya import OpenMayaUI as omui
    from PySide2 import QtWidgets
    from shiboken2 import wrapInstance

    maya_main_window_ptr = omui.MQtUtil.mainWindow()
    maya_main_window = wrapInstance(long(maya_main_window_ptr), QtWidgets.QWidget)
    # from maya.app.general import mayaMixin
    # mayaQtBaseClass = mayaMixin.MayaQWidgetDockableMixin
    # mayaQtBaseClass = mayaMixin.MayaQWidgetBaseMixin
    # ui.set_window_base_class(mayaQtBaseClass)
    ui.create_ui(maya_main_window)


def add_specific_to_common_ui(main_window):
    """ Will be called from within the common PySide2 UI. Add any program-
    specific PySide2 based UI parts to the main window's layout from here.

    This function must be implemented in the program-ui-module. If you
    don't have any specific parts to add, leave the body empty.

    """
    from .mayaPSUICameraWidget import mayaPSUICameraWidget
    camera_widget = mayaPSUICameraWidget()
    layout = main_window.layout()
    # insert after the connect-line
    index = layout.indexOf(main_window.topRowWidget)
    layout.insertWidget(index+1, camera_widget)
