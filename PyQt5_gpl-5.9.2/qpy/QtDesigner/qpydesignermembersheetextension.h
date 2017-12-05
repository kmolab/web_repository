// This is the definition and implementation of the
// QPyDesignerMemberSheetExtension class.
//
// Copyright (c) 2017 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt5.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


#ifndef _QPYDESIGNERMEMBERSHEETEXTENSION_H
#define _QPYDESIGNERMEMBERSHEETEXTENSION_H


#include <QObject>
#include <QDesignerMemberSheetExtension>


class QPyDesignerMemberSheetExtension : public QObject, public QDesignerMemberSheetExtension
{
    Q_OBJECT
    Q_INTERFACES(QDesignerMemberSheetExtension)

public:
    QPyDesignerMemberSheetExtension(QObject *parent) : QObject(parent) {};

private:
    QPyDesignerMemberSheetExtension(const QPyDesignerMemberSheetExtension &);
};

#endif