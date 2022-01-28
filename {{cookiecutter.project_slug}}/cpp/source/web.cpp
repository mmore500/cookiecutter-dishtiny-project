//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "Empirical/include/emp/prefab/ConfigPanel.hpp"
#include "Empirical/include/emp/web/web.hpp"

#include "{{cookiecutter.project_namespace}}/config_setup.hpp"
#include "{{cookiecutter.project_namespace}}/ExampleConfig.hpp"
#include "{{cookiecutter.project_namespace}}/example.hpp"

namespace UI = emp::web;

UI::Document doc("emp_base");

{{ cookiecutter.project_namespace }}::Config cfg;

int main() {
  doc << "<h1>Hello, browser!</h1>";

  // Set up a configuration panel for web application
  setup_config_web(cfg);
  cfg.Write(std::cout);
  emp::prefab::ConfigPanel example_config_panel(cfg);
  doc << example_config_panel;

  std::cout << "Hello, console!" << "\n";

  return {{cookiecutter.project_namespace}}::example();
}
