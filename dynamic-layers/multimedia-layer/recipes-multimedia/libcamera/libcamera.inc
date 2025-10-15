PACKAGECONFIG[raspberrypi] = "-Dpipelines=rpi/pisp -Dipas=rpi/pisp -Dv4l2=true -Dtest=false -Dlc-compliance=disabled -Dcam=enabled -Ddocumentation=disabled"
PACKAGECONFIG = " raspberrypi"
CXXFLAGS = " -Wno-unaligned-access "

DEPENDS += "libpisp"

SRC_URI:remove = " \
        git://git.libcamera.org/libcamera/libcamera.git;protocol=https;branch=master \
        file://0001-media_device-Add-bool-return-type-to-unlock.patch \
        file://0002-libcamera-Add-missing-stdint.h-include-to-dma_buf_al.patch \
"

INSANE_SKIP:${PN} += "buildpaths"

LIC_FILES_CHKSUM:remove = "\
    file://LICENSES/GPL-2.0-or-later.txt;md5=fed54355545ffd980b814dab4a3b312c \
    file://LICENSES/LGPL-2.1-or-later.txt;md5=2a4f4fd2128ea2f65047ee63fbca9f68 \
"

SRC_URI = "${LIBCAMERA_SRC};branch=${LIBCAMERA_BRANCH} "
LIBCAMERA_SRC ?= "git://github.com/raspberrypi/libcamera.git;;protocol=https"
LIBCAMERA_BRANCH = "main"
SRCREV = "bfd68f786964636b09f8122e6c09c230367390e7"

SRC_URI[sha256sum] = "606aa26338f69ce178f1cbc648b7574aec4b5bbaeb20f4df36ff49010cb8fbbd"
