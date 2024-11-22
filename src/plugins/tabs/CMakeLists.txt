add_qtc_plugin(Tabs
  PLUGIN_DEPENDS Core ProjectExplorer TextEditor LayoutSupport 
  SOURCES
        constants.h
        mainwindowfilter.cpp mainwindowfilter.h
        plugin.cpp plugin.h
        tabbar.cpp tabbar.h
)
