cc_test(
    name = "tests",
    srcs = ["test.cpp"],
    deps = ["//calc:add",
            "//calc:sub",
            "//calc:mul",
            "//calc:div",
         "@com_google_googletest//:gtest",
         "@com_google_googletest//:gtest_main",
    ],
    visibility = ["//visibility:public"],
)