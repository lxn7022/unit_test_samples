cc_binary(
    name = 'main',
    srcs = [
        'main.cpp',
    ],
    deps = [
        '//override_mock/lib_org:org',
        '//override_mock/lib_app:app',
    ],
    extra_cppflags = [
        '-Ioverride_mock/test',
        '-Ioverride_mock/lib_app',
        '-Ioverride_mock/lib_org',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
