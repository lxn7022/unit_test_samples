cc_test(
    name = 'vehiclie_ut',
    srcs = [
            'vehiclie_ut.cpp'
    ],
    deps = [
        '//vehiclie_on_mars/lib_vehiclie:vehiclie',
        '//third_party/gtest:gtest_main',
    ],
    extra_cppflags = [
        '-I./vehiclie_on_mars/lib_vehiclie',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
