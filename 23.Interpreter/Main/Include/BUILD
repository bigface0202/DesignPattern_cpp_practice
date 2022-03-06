#
# @file BUILD
# 
# @author y-ksst / created on 2021/12/09
#
# load( "@cv//:cv_deploy.bzl", "cv_deploy" )

load( "@gwrt//Main:gwrt.bzl", "gwrt_library" )

gwrt_library(
    name = "Include",
    # ここにヘッダーファイル名を挿入
    hdrs = [
      "Node.hpp",
      "CommandNode.hpp",
      "CommandListNode.hpp",
      "PrimitiveCommandNode.hpp",
      "RepeatCommandNode.hpp",
      "ProgramNode.hpp",
      "Context.hpp",
      "ParseException.hpp",
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "CommandNode.cpp",
      "CommandListNode.cpp",
      "PrimitiveCommandNode.cpp",
      "RepeatCommandNode.cpp",
      "ProgramNode.cpp",
      "Context.cpp"
    ],
    copts = [],
    deps = [],
)