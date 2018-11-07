#pragma once

#include <QtWidgets/QtWidgets>

namespace Demo {

class CWidget final : public QWidget
{
public: // methods
    void paintEvent(QPaintEvent *) override;
};

} // namespace Demo
