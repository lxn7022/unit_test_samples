cc_test(
    name = 'app_ut',
    srcs = [
        'app_ut.cpp',
    ],
    deps = [
        '//very_first/lib_org:org',
        '//very_first/lib_app:app',
        '//third_party/gtest:gtest_main',
        '//third_party/gtest:gmock_main',
    ],
    extra_cppflags = [
        '-I./very_first/test',
        '-I./very_first/lib_org',
        '-I./very_first/lib_app',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
