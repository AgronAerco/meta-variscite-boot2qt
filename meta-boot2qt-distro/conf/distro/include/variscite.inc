############################################################################
##
## Copyright (C) 2020 The Qt Company Ltd.
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

include conf/distro/include/fsl-imx8.inc

IMAGE_BOOT_FILES_remove = "Image"
IMAGE_BOOT_FILES_prepend = "Image.gz"

IMAGE_FSTYPES_remove = "ext3"
IMAGE_FSTYPES += "tar.gz"

# recovery SD dependencies and test tools
IMAGE_INSTALL_append = " \
    alsa-utils \
    boot2qt-demo-camera \
    can-utils \
    e2fsprogs-mke2fs \
    evtest \
    imx-gst1.0-plugin-gplay \
    iperf3 \
    pulseaudio-misc \
    pulseaudio-server \
    tar \
    "

WKS_FILE = "imx8-uboot-singlepart.wks.in"

BBMASK += " \
    meta-variscite-imx/recipes-fsl/images/fsl-image-gui.bbappend \
    "