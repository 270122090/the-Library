#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QDialog>
#include "addbook.h"

namespace Ui {
class librarian;
}

class librarian : public QDialog
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = nullptr);
    ~librarian();

    void add_book();



private:
    Ui::librarian *ui;


};

#endif // LIBRARIAN_H