cc_library(
    name = 'app',
    srcs = [
        'app.cpp', 
    ],
    deps = [
        '//derived_class_mock/lib_org:org'
    ],
    extra_cppflags = [
        '-I./derived_class_mock/lib_org',
        '-I./derived_class_mock/test',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
