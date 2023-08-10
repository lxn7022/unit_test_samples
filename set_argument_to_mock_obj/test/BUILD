cc_test(
    name = 'app_ut',
    srcs = [
        'app_ut.cpp',
    ],
    deps = [
        '//set_argument_to_mock_obj/lib_org:org',
        '//set_argument_to_mock_obj/lib_app:app',
        '//third_party/gtest:gtest_main',
        '//third_party/gtest:gmock_main',
    ],
    extra_cppflags = [
        '-DDO_UNIT_TEST',
        '-Iset_argument_to_mock_obj/test',
        '-Iset_argument_to_mock_obj/lib_org',
        '-Iset_argument_to_mock_obj/lib_app',
    ],
    extra_linkflags = [
        '-Wl,-E',
    ],
)
