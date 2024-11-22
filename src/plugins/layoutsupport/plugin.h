#pragma once

#include <extensionsystem/iplugin.h>

#include <QStringList>

namespace LayoutSupport
{
namespace Internal {

class LayoutSupportPlugin final : public ExtensionSystem::IPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE
                          "LayoutSupport.json")

public:
    explicit LayoutSupportPlugin() noexcept;
    bool initialize(const QStringList &arguments,
                    QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;
};
}
} // namespace LayoutSupport::Internal
