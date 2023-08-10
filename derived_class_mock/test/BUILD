cc_test(
    name = 'app_ut',
    srcs = [
        'app_ut.cpp',
    ],
    deps = [
        '//derived_class_mock/lib_org:org',
        '//derived_class_mock/lib_app:app',
        '//third_party/gtest:gtest_main',
        '//third_party/gtest:gmock_main',
    ],
    extra_cppflags = [
        '-I./derived_class_mock/test',
        '-I./derived_class_mock/lib_org',
        '-I./derived_class_mock/lib_app',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
