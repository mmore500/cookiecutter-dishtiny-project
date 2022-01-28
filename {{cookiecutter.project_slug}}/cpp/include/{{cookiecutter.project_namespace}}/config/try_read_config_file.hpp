#pragma once
#ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
#define {{ cookiecutter.project_namespace.upper() }}_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE

#include <cstdlib>
#include <iostream>
#include <filesystem>

#include "Config.hpp"

namespace {{cookiecutter.project_namespace}} {

void try_read_config_file({{ cookiecutter.project_namespace }}::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("{{cookiecutter.project_namespace}}.cfg")) {
    std::cout << "Configuration read from {{cookiecutter.project_namespace}}.cfg" << '\n';
    config.Read("{{cookiecutter.project_namespace}}.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

} // namespace {{cookiecutter.project_namespace}}

#endif // #ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
