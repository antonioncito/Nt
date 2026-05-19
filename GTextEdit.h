#ifndef G_EDITOR_H
#define G_EDITOR_H

#include <QTextEdit>

class GTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    explicit GTextEdit(QWidget* parent = nullptr);
    ~GTextEdit();
private:
    void wheelEvent(QWheelEvent* event) override;
};

#endif // G_EDITOR_H
