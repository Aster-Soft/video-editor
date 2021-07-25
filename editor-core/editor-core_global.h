#ifndef EDITORCORE_GLOBAL_H
#define EDITORCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(EDITORCORE_LIBRARY)
#  define EDITORCORE_EXPORT Q_DECL_EXPORT
#else
#  define EDITORCORE_EXPORT Q_DECL_IMPORT
#endif

#endif // EDITORCORE_GLOBAL_H
