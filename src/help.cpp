#include "help.h"

namespace cmkr::help {

const char *version() {
    return "cmkr version 0.1.0";
}

const char *message() {
    return R"lit(
Usage: cmkr [arguments]
arguments:
    init     [exe|shared|static]    Starts a new project in the same directory.
    gen                             Generates CMakeLists.txt file.
    build    <extra cmake args>     Run cmake and build.
    help                            Show help.
    version                         Current cmkr version.
            )lit";
}
} // namespace cmkr::help

const char *cmkr_help_version(void) {
    return cmkr::help::version();
}

const char *cmkr_help_message(void) {
    return cmkr::help::message();
}