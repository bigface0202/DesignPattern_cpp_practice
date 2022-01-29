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
      "Visitor.hpp",
      "Element.hpp",
      "ListVisitor.hpp",
      "Entry.hpp",
      "File.hpp",
      "Directory.hpp",
      "FileTreatmentException.hpp",
    ],
    # ここにソースファイル名を挿入
    srcs = [
      "Element.cpp",
      "ListVisitor.cpp",
      "Entry.cpp",
      "File.cpp",
      "Directory.cpp",
    ],
    copts = [],
    deps = [],
)