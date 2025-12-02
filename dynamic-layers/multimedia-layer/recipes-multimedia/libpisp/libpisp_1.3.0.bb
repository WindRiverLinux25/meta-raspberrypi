LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3417a46e992fdf62e5759fba9baef7a7"

SRC_URI:prepend = "${LIBISP_SRC};branch=${LIBISP_BRANCH} \
		file://0001-build-use-absolute-path.patch \
"
LIBISP_SRC ?= "git://github.com/raspberrypi/libpisp.git;protocol=https"
LIBISP_BRANCH = "main"
SRCREV = "9ba67e6680f03f31f2b1741a53e8fd549be82cbe"
S = "${WORKDIR}/git"

inherit meson pkgconfig python3native

DEPENDS += "nlohmann-json"
