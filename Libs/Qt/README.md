# K-Icona Qt Library
[![Hex.pm](https://img.shields.io/badge/License-Apache--2-blue.svg?style=plastic)](https://github.com/kariminf/K-Icona/blob/master/LICENSE)
[![Hex.pm](https://img.shields.io/badge/Version-1.0.0-blue.svg?style=plastic)](https://github.com/kariminf/K-Icona/releases)

Kariminf Icon project. The goal is to afford a set of icons for softwares.
## Functions

The first one returns a list of styles names with their corresponding icon (the set icon)
```c++
QMap<QString, QIcon> availableStyles ();
```

The second one returns the name of the default icon set
```c++
QString getDefaultStyle();
```

The third returns the icon affording the icon set name (style name) and the name of the icon inside the style
```c++
QIcon getIcon(QString styleName, QString name);
```
## Licence
The code is released under Apache 2.0 license.
For more details about this license, check [LICENSE](./LICENSE) file
