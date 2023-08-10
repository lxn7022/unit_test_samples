cc_binary(
    name = 'main',
    srcs = [
        'main.cpp',
    ],
    deps = [
        '//derived_class_mock/lib_org:org',
        '//derived_class_mock/lib_app:app',
    ],
    extra_cppflags = [
        '-I./derived_class_mock/test',
        '-I./derived_class_mock/lib_app',
        '-I./derived_class_mock/lib_org',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
