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
      "Trouble.hpp",
      "Support.hpp",
      "NoSupport.hpp",
      "LimitSupport.hpp",
      "OddSupport.hpp",
      "SpecialSupport.hpp"
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "Trouble.cpp",
      "Support.cpp"
    ],
    copts = [],
    deps = [],
)