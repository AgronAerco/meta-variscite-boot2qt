############################################################################
##
## Copyright (C) 2018 The Qt Company Ltd.
## Contact: https://www.qt.io/licensing/
##
## This file is part of the Boot to Qt meta layer.
##
## $QT_BEGIN_LICENSE:GPL$
## Commercial License Usage
## Licensees holding valid commercial Qt licenses may use this file in
## accordance with the commercial license agreement provided with the
## Software or, alternatively, in accordance with the terms contained in
## a written agreement between you and The Qt Company. For licensing terms
## and conditions see https://www.qt.io/terms-conditions. For further
## information use the contact form at https://www.qt.io/contact-us.
##
## GNU General Public License Usage
## Alternatively, this file may be used under the terms of the GNU
## General Public License version 3 or (at your option) any later version
## approved by the KDE Free Qt Foundation. The licenses are as published by
## the Free Software Foundation and appearing in the file LICENSE.GPL3
## included in the packaging of this file. Please review the following
## information to ensure the GNU General Public License requirements will
## be met: https://www.gnu.org/licenses/gpl-3.0.html.
##
## $QT_END_LICENSE$
##
############################################################################

DESCRIPTION = "QML Live Preview debug service"
LICENSE = "The-Qt-Company-Commercial"
LIC_FILES_CHKSUM = "file://${QT_LICENSE};md5=948f8877345cd66106f11031977a4625"

inherit qt5-module
require recipes-qt/qt5/qt5-git.inc

SRCREV = "6ae4a9da17e53bbb7c1729c24f58141a33bbcb9b"
BRANCH = "master"

SRC_URI = " \
    git://codereview.qt-project.org/qt/tqtc-qmlpreview;branch=${BRANCH};protocol=ssh \
    "

DEPENDS = "qtbase qtdeclarative"
