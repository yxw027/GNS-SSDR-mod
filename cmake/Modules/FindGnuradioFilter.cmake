INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(GNURADIO_FILTER gnuradio-filter>=3.7)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GNURADIO_FILTER DEFAULT_MSG GNURADIO_FILTER_LIBRARIES GNURADIO_FILTER_INCLUDE_DIRS)
MARK_AS_ADVANCED(GNURADIO_FILTER_LIBRARIES GNURADIO_FILTER_INCLUDE_DIRS)