#ifndef EDITSELECT_H
#define EDITSELECT_H

#include <QDialog>

namespace Ui {
    class editSelect;
}

class editSelect : public QDialog {
    Q_OBJECT
public:
    editSelect(QWidget *parent = 0);
    editSelect(int type);
    ~editSelect();

protected:
    void changeEvent(QEvent *e);

signals:
   void selected(int select);

private:
    Ui::editSelect *ui;
    int blockType;

private slots:
    void on_buttonBox_accepted();
};

#endif // EDITSELECT_H
