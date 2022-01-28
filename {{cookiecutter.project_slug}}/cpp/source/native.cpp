//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "Empirical/include/emp/base/vector.hpp"

#include "{{cookiecutter.project_namespace}}/config_setup.hpp"
#include "{{cookiecutter.project_namespace}}/ExampleConfig.hpp"
#include "{{cookiecutter.project_namespace}}/example.hpp"

// This is the main function for the NATIVE version of {{cookiecutter.project_name}}.

{{ cookiecutter.project_namespace }}::Config cfg;

int main(int argc, char* argv[]) {
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return {{ cookiecutter.project_namespace }}::example();
}
