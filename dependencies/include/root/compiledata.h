/* This file is automatically generated */
#define BUILD_ARCH "macosx64"
#define BUILD_NODE "Darwin catalina.internal.macports.net 19.0.0 Darwin Kernel Version 19.0.0: Thu Oct 17 16:17:15 PDT 2019; root:xnu-6153.41.3~29/RELEASE_X86_64 x86_64"
#define CXX "clang++"
#define COMPILER "/usr/bin/clang++"
#define COMPILERVERS "clang1100"
#define MAKESHAREDLIB  "cd $BuildDir ; clang++ -fPIC -c $Opt -pipe -Os -DNDEBUG -I/opt/local/include -stdlib=libc++ -isysroot/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk -std=c++17 -Wc++11-narrowing -Wsign-compare -Wsometimes-uninitialized -Wconditional-uninitialized -Wheader-guard -Warray-bounds -Wcomment -Wtautological-compare -Wstrncat-size -Wloop-analysis -Wbool-conversion -m64 -pipe -W -Woverloaded-virtual -fsigned-char -fno-common -Qunused-arguments -pthread -stdlib=libc++ -DR__HAVE_CONFIG $IncludePath $SourceFiles ; clang++ $Opt $ObjectFiles -dynamiclib -Wl,-headerpad_max_install_names -m64 -single_module -Wl,-dead_strip_dylibs  $LinkedLibs -o $SharedLib"
#define MAKEEXE "cd $BuildDir ; clang++ -c  -pipe -Os -DNDEBUG -I/opt/local/include -stdlib=libc++ -isysroot/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk -std=c++17 -Wc++11-narrowing -Wsign-compare -Wsometimes-uninitialized -Wconditional-uninitialized -Wheader-guard -Warray-bounds -Wcomment -Wtautological-compare -Wstrncat-size -Wloop-analysis -Wbool-conversion -m64 -pipe -W -Woverloaded-virtual -fsigned-char -fno-common -Qunused-arguments -pthread -stdlib=libc++ -DR__HAVE_CONFIG $IncludePath $SourceFiles; clang++ $ObjectFiles  -o $ExeName $LinkedLibs"
#define CXXOPT "-O2 -DNDEBUG"
#define CXXDEBUG "-g"
#define ROOTBUILD ""
#define LINKEDLIBS "-L/opt/local/libexec/root6/lib/root -lCore -lRint "
#define INCLUDEPATH "-I/opt/local/libexec/root6/include/root"
#define OBJEXT "o"
#define SOEXT "so"
