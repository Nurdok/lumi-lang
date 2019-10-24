load("//:lumi.bzl", "lumi_binary")

cc_library(
    name = "lumi",
    srcs = ["lumi.3.c"],
    hdrs = ["lumi.3.h"],
    # This is a workaround for https://github.com/bazelbuild/bazel/issues/6337.
    includes = ["."],
    # strip_include_prefix allows dependending rules to include headers without
    # the prefix.
    strip_include_prefix = "",
    visibility = [
        "//TL4:__pkg__",
        "//lumi-command:__pkg__",
    ],
)

lumi_binary(
    name = "compiler",
    srcs = (
        "common.2.lm",
        "map.2.lm",
        "global.2.lm",
        "exp.2.lm",
        "st-node.2.lm",
        "flow.2.lm",
        "args.2.lm",
        "func.2.lm",
        "member.2.lm",
        "call.2.lm",
        "operand.2.lm",
        "dec.2.lm",
        "type.2.lm",
        "test.2.lm",
        "tl3-compiler.2.lm",
    ),
    compiler = "//TL2:compiler",
    lumi_version = 2,
    visibility = ["//visibility:public"],
)
