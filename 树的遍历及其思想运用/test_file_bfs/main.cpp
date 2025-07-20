#include <filesystem>
#include "algorithm.h" 
auto main() -> int {
    std::filesystem::path dir_path("test_dir");
    hbutds::list_files_bfs(dir_path);
    return 0; 
}