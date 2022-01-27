docs/_build/doc-coverage.json:
	cd docs && make coverage

documentation-coverage-badge.json: docs/_build/doc-coverage.json
	python3 ci/parse_documentation_coverage.py docs/_build/doc-coverage.json > web/documentation-coverage-badge.json

version-badge.json:
	python3 ci/parse_version.py .bumpversion.cfg > web/version-badge.json

doto-badge.json:
	python3 ci/parse_dotos.py $$(./ci/grep_dotos.sh) > web/doto-badge.json

badges: documentation-coverage-badge.json version-badge.json doto-badge.json

clean:
	make clean -C cpp

.PHONY: tests clean test serve debug native web tests install-test-dependencies documentation-coverage documentation-coverage-badge.json version-badge.json doto-badge.json
