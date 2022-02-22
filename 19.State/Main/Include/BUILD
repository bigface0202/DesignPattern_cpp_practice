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
      "State.hpp",
      "DayState.hpp",
      "NightState.hpp",
      "Context.hpp",
      "SafeFrame.hpp"
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "DayState.cpp",
      "NightState.cpp",
      "SafeFrame.cpp"
    ],
    copts = [],
    deps = [],
)