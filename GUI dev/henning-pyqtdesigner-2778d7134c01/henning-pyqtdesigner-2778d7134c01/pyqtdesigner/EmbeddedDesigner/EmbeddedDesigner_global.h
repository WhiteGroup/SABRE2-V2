#ifndef EMBEDEDDESIGNER_GLOBAL_H
#define EMBEDEDDESIGNER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(EMBEDEDDESIGNER_LIBRARY)
#  define EMBEDEDDESIGNERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define EMBEDEDDESIGNERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // EMBEDEDDESIGNER_GLOBAL_H
