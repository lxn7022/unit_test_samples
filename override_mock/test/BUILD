cc_test(
    name = 'app_ut',
    srcs = [
        'app_ut.cpp',
    ],
    deps = [
        '//override_mock/lib_org:org',
        '//override_mock/lib_app:app',
        '//third_party/gtest:gtest_main',
        '//third_party/gtest:gmock_main',
    ],
    extra_cppflags = [
        '-Ioverride_mock/test',
        '-Ioverride_mock/lib_org',
        '-Ioverride_mock/lib_app',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
