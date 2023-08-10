cc_library(
    name = 'app',
    srcs = [
        'app.cpp', 
    ],
    deps = [
        '//very_first/lib_org:org'
    ],
    extra_cppflags = [
        '-I./very_first/lib_org',
        '-I./very_first/test',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
