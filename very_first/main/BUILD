cc_binary(
    name = 'main',
    srcs = [
        'main.cpp',
    ],
    deps = [
        '//very_first/lib_org:org',
        '//very_first/lib_app:app',
    ],
    extra_cppflags = [
        '-I./very_first/test',
        '-I./very_first/lib_app',
        '-I./very_first/lib_org',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
