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
      "Display.hpp",
      "StringDisplay.hpp",
      "Border.hpp",
      "SideBorder.hpp",
      "FullBorder.hpp"
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "Display.cpp",
      "StringDisplay.cpp",
      "Border.cpp",
      "SideBorder.cpp",
      "FullBorder.cpp"
    ],
    copts = [],
    deps = [],
)