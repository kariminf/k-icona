#ifndef QKICONA_GLOBAL_H
#define QKICONA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QKICONA_LIBRARY)
#  define QKICONASHARED_EXPORT Q_DECL_EXPORT
#else
#  define QKICONASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QKICONA_GLOBAL_H
