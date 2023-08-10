cc_binary(
    name = 'main',
    srcs = [
        'main.cpp',
    ],
    deps = [
        '//vehiclie_on_mars/lib_vehiclie:vehiclie',
    ],
    extra_cppflags = [
        '-I./vehiclie_on_mars/lib_vehiclie',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
