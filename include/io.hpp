#pragma once
#include <iostream>
#include <vector>

struct Directory
{
    std::string fileType;
    std::string file;
};

// loads directory
void LoadDir(std::vector<Directory> &Dir, std::vector<std::string> path);

void StringToPath(std::string path, std::vector<std::string> &pathV);

std::string PathToString(const std::vector<std::string> &pathV);

std::string runCommand(std::string command, std::string currentPath);
