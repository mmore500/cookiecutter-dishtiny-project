
{% set is_open_source = cookiecutter.open_source_license != 'Not open source' -%}  # {{ cookiecutter.project_name }}

{% if is_open_source %}
[![version](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.github.io%2F{{ cookiecutter.project_slug }}%2Fversion-badge.json)](https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}/releases)
[![GitHub Actions Status](https://github.com/{{cookiecutter.github_username}}/{{cookiecutter.project_slug}}/actions/workflows/CI/badge.svg)](https://github.com/{{cookiecutter.github_username}}/{{cookiecutter.project_slug}}/actions/workflows/CI/)
[![Documentation Status](https://readthedocs.org/projects/{{ cookiecutter.project_slug | replace("_", "-") }}/badge/?version=latest)](https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io/en/latest/?badge=latest)
[![documentation coverage](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.github.io%2F{{ cookiecutter.project_slug }}%2Fdocumentation-coverage-badge.json)](https://{{ cookiecutter.project_slug }}.readthedocs.io/en/latest/)
[![code coverage status](https://codecov.io/gh/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}/branch/master/graph/badge.svg)](https://codecov.io/gh/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }})
[![dotos](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.com%2F{{ cookiecutter.project_slug }}%2Fdoto-badge.json)](https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}/search?q=todo+OR+fixme&type=)
[![GitHub stars](https://img.shields.io/github/stars/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.svg?style=flat-square&logo=github&label=Stars&logoColor=white)](https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }})
{%- endif %}

{{ cookiecutter.project_short_description }}

Check out the live in-browser web app at <https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}>.

{% if is_open_source %}
-   Free software: {{ cookiecutter.open_source_license }}
<!---
-   Documentation: <https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io>.
-->
{% endif %}

<!---
## Features

-   TODO

![cookie monster example](docs/assets/cookie.gif)
-->

## Credits

This package was created with [Cookiecutter][https://github.com/audreyr/cookiecutter] and the [mmore500/cookiecutter-dishtiny-project][https://github.com/mmore500/cookiecutter-dishtiny-project] project template.

<!---
This package uses [Empirical](https://github.com/devosoft/Empirical#readme), a library of tools for scientific software development, with emphasis on also being able to build web interfaces using Emscripten.
-->
