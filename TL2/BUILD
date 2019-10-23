cc_library(
    name = "lumi",
    srcs = ["lumi.2.c"],
    hdrs = ["lumi.2.h"],
    # This is a workaround for https://github.com/bazelbuild/bazel/issues/6337.
    includes = ["."],
    # strip_include_prefix allows dependending rules to include headers without
    # the TL4 prefix.
    strip_include_prefix = "",
    visibility = [
        "//TL3:__pkg__",
        "//lumi-command:__pkg__",
    ],
)

cc_binary(
    name = "compiler",
    srcs = ["tl2-compiler.c"],
    visibility = ["//visibility:public"],
    deps = [
        "//TL1:lumi",
    ],
)
