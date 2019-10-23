cc_library(
    name = "lumi",
    srcs = ["lumi.3.c"],
    hdrs = ["lumi.3.h"],
    # This is a workaround for https://github.com/bazelbuild/bazel/issues/6337.
    includes = ["."],
    # strip_include_prefix allows dependending rules to include headers without
    # the TL4 prefix.
    strip_include_prefix = "",
    visibility = [
        "//TL4:__pkg__",
        "//lumi-command:__pkg__",
    ],
)

cc_binary(
    name = "compiler",
    srcs = ["tl3-compiler.c"],
    visibility = ["//visibility:public"],
    deps = [
        "//TL2:lumi",
    ],
)
