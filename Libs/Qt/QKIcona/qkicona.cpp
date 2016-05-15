#include "qkicona.h"


QMap<QString, QIcon> QKIcona::availableStyles()
{
    QMap<QString, QIcon> result;

    result.insert("Goldy", getIcon("Goldy", "icona"));
    result.insert("LikeSky", getIcon("LikeSky", "icona"));
    result.insert("DzIcona", getIcon("DzIcona", "icona"));

    return result;
}

QString QKIcona::getDefaultStyle()
{
    return "Goldy";
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
