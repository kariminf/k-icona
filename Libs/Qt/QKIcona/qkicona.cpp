#include "qkicona.h"


void QKIcona::setIcon(QAction * action, QString styleName, QString name)
{
    QString iconPath = ":/Icones/" + styleName + "/" + name + ".png";

    QResource fileRessource(iconPath);
    if(fileRessource.isValid()){
        action->setIcon(QIcon(iconPath));
    }

}

QIcon QKIcona::getIcon(QString styleName, QString name)
{
    QString iconPath = ":/" + styleName + "/Icons/" + styleName + "/" + name + ".png";

    //qDebug() << "icon path: " << iconPath;

    QResource fileRessource(iconPath);
    if(fileRessource.isValid()){
        //qDebug() << "icon found";
        QIcon icon;
        icon.addFile(iconPath, QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(iconPath, QSize(), QIcon::Normal, QIcon::On);
        return icon;
    }

    return QIcon();

}
