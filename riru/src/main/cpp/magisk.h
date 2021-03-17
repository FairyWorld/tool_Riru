#pragma once

#include <functional>

namespace Magisk {

    const char* GetPath();

    void SetPath(const char *path);

    std::string GetPathForSelf(const char *name);

    std::string GetPathForSelfLib(const char *name);

    void ForEachModule(const std::function<void(const char* riru_files_path)> &fn);
}