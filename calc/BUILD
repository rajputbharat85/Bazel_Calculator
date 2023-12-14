
 
cc_binary(
 
    name = "Cal",
    srcs = ["main.cpp"],
    deps = [
             ":add", ":mul", ":sub", ":div"
    ],
)
 
cc_library(
 
    name = "add",
    srcs= ["add.cpp"],
    hdrs = ["add.h"],
    visibility = ["//visibility:public"],
)

cc_library(
 
    name = "mul",
    srcs= ["mul.cpp"],
    hdrs = ["mul.h"],
    visibility = ["//visibility:public"],
)

cc_library(
 
    name = "sub",
    srcs= ["sub.cpp"],
    hdrs = ["sub.h"],
    visibility = ["//visibility:public"],
)


cc_library(
 
    name = "div",
    srcs= ["div.cpp"],
    hdrs = ["div.h"],
    visibility = ["//visibility:public"],
)