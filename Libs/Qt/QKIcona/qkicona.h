#ifndef QKICONA_H
#define QKICONA_H

#include "qkicona_global.h"
#include <QIcon>
#include <QResource>
#include <QAction>
#include <QDebug>
#include <QMap>

class QKICONASHARED_EXPORT QKIcona
{

public:
    QMap<QString, QIcon> availableStyles ();
    QString getDefaultStyle();
    QIcon getIcon(QString styleName, QString name);
};

#endif // QKICONA_H
