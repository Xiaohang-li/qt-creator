#include "plugin.h"

#include "tabbar.h"

#include <coreplugin/icore.h>

#include <QBoxLayout>
#include <QMenuBar>
#include <QScrollBar>

namespace Tabs::Internal {

bool TabsPlugin::initialize([[maybe_unused]] const QStringList &arguments,
                            [[maybe_unused]] QString *errorString) {

    auto *mainWindow = Core::ICore::mainWindow();
    auto wrapperLayout =
        static_cast<QVBoxLayout *>(mainWindow->centralWidget()->layout());

    auto *widget = new QWidget(mainWindow->centralWidget());
    auto *layout = new QHBoxLayout;
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);
    widget->setLayout(layout);

    auto *tabBar = new TabBar(mainWindow->centralWidget());
    layout->addWidget(tabBar);
    wrapperLayout->insertWidget(wrapperLayout->count() - 1, widget);
    return true;
}

void TabsPlugin::extensionsInitialized() {
  
}

} // namespace Tabs::Internal
