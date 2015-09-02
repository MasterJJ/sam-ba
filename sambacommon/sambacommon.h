#ifndef SAMBA_COMMON_H
#define SAMBA_COMMON_H

#include <QtCore/qglobal.h>
#include <QLoggingCategory>

#if defined(SAMBACOMMON_LIBRARY)
#  define SAMBACOMMONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SAMBACOMMONSHARED_EXPORT Q_DECL_IMPORT
#endif

Q_DECLARE_LOGGING_CATEGORY(sambaLogCore)
Q_DECLARE_LOGGING_CATEGORY(sambaLogApplet)
Q_DECLARE_LOGGING_CATEGORY(sambaLogQml)

#endif // SAMBA_COMMON_H