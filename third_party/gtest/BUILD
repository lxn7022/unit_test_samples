cc_library(
    name = "gtest_main",
    srcs = [
            "src/gtest-all.cc", 
            "src/gtest.cc", 
            "src/gtest-death-test.cc", 
            "src/gtest-filepath.cc", 
            "src/gtest_main.cc", 
            "src/gtest-port.cc", 
            "src/gtest-printers.cc", 
            "src/gtest-test-part.cc", 
            "src/gtest-typed-test.cc", 
            ],
    incs = [
            "gtest/include",
            ],
)
cc_library(
    name = "gmock_main",
    srcs = [
            "src/gmock-all.cc", 
            "src/gmock-cardinalities.cc", 
            "src/gmock.cc", 
            "src/gmock-internal-utils.cc", 
            "src/gmock_main.cc", 
            "src/gmock-matchers.cc", 
            "src/gmock-spec-builders.cc", 
            ],
    incs = [
            "gmock/include",
            ],
    deps = [
            ":gtest_main"
            ],
)
