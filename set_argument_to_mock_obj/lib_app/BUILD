cc_library(
    name = 'app',
    srcs = [
        'app.cpp', 
    ],
    deps = [
        '//set_argument_to_mock_obj/lib_org:org'
    ],
    extra_cppflags = [
        '-DDO_UNIT_TEST',
        '-Iset_argument_to_mock_obj/lib_org',
        '-Iset_argument_to_mock_obj/test',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
