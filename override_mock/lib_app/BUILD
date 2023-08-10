cc_library(
    name = 'app',
    srcs = [
        'app.cpp', 
    ],
    deps = [
        '//override_mock/lib_org:org'
    ],
    extra_cppflags = [
        '-Ioverride_mock/lib_org',
        '-Ioverride_mock/test',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
