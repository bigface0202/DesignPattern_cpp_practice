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
      "Command.hpp",
      "SimpleCommand.hpp",
      "ComplexCommand.hpp",
      "Invoker.hpp",
      "Receiver.hpp"
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "SimpleCommand.cpp",
      "ComplexCommand.cpp",
      "Invoker.cpp",
      "Receiver.cpp"
    ],
    copts = [],
    deps = [],
)