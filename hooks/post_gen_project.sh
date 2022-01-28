#!/bin/bash


# Automate git repository and submodule initialization
# Adopted from https://github.com/devosoft/cookiecutter-empirical-project#quickstart
git init
git submodule add --depth=1 https://github.com/mmore500/dishtiny.git cpp/third-party/dishtiny
git submodule update --init --recursive --depth=1

ln -s ./dishtiny/third-party/Catch cpp/third-party/Catch
ln -s ./dishtiny/third-party/Empirical cpp/third-party/Empirical
ln -s ./dishtiny/third-party/cereal cpp/third-party/cereal
ln -s ./dishtiny/third-party/conduit cpp/third-party/conduit
ln -s ./dishtiny/third-party/force-cover cpp/third-party/force-cover

ln -s ./cpp/third-party/dishtiny/third-party/requirements.txt requirements.txt
ln -s ../requirements.txt binder/requirements.txt

ln -s ../pylib binder/pylib
ln -s ../../pylib binder/example/pylib

mkdir -p docs/docs
ln -s ../assets docs/docs/assets

git add .
git commit -m "Initial commit" --no-gpg-sign

# Attempt to push local repo to remote repository on github
git remote add origin git@github.com:{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.git
