This directory contains statically compiled binaries of libpng 1.6.32 and zlib
1.2.8. They were compiled using the "vstudio" project in the libpng 1.6.32
source[1] on Microsoft Visual Studio 2017 with "Visual Studio 2015 (v140)" compiler.

The following settings were used:

1.) The instructions stated in README.txt in the vstudio directory were
followed.

2.) The "Release Library" Configuration was set for both libpng and zlib (pngtest
was not built).

Using this approach, no external libraries or DLLs should be required for the
user to install (outside of those already installed by Python).

[1]: (Download: http://prdownloads.sourceforge.net/libpng/lpng1632.zip?download
      Path: "projects/vstudio")
