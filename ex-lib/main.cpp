
#include <cstddef>
#include <cstdint>
#include <iostream>

#include <autoArgParse/argParser.h>

namespace {
    namespace AP = AutoArgParse ;
    AP::ArgParser parser ;

    auto &helpFlag    = parser.add<AP::Flag> ("--help"   , AP::Policy::OPTIONAL, "Print this.");
    auto &verboseFlag = parser.add<AP::Flag> ("--verbose", AP::Policy::OPTIONAL, "Be verbose.");
}

int main (int argc, const char **argv) {
    parser.validateArgs (argc, argv) ;
    if (verboseFlag) {
        std::cerr << "Verbose mode turn on." << std::endl ;
    }
    if (helpFlag) {
        parser.printAllUsageInfo (std::cout, argv [0]) ;
    }
    return 0 ;
}
