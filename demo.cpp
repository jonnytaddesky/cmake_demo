#include "demo.hpp"

namespace {

CWidget::paintEvent(QPaintEvent *)
{
    QPainter p(*this);
    p.fillRect(rect(), QColor(qrand() % 256, qrand() % 256, qrand() % 256, ));

    QTimer::singleShot(16, this, SLOT(update()));
}

} // namespace
