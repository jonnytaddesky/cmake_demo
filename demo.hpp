#pragma once

#include <QtWidgets/QtWidgets>

namespace Demo {

class CWidget final : public QWidget
{
protected: // methods
    void paintEvent(QPaintEvent *) override;
};

} // namespace Demo
