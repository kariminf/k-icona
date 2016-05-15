#ifndef QKICONA_H
#define QKICONA_H

#include "qkicona_global.h"
#include <QIcon>
#include <QResource>
#include <QAction>
#include <QDebug>

class QKICONASHARED_EXPORT QKIcona
{

public:
    void setIcon(QAction *action, QString styleName, QString name);
    QIcon getIcon(QString styleName, QString name);
};

#endif // QKICONA_H
