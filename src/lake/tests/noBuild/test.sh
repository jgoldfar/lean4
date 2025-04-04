#!/usr/bin/env bash
set -euxo pipefail

# Tests that Lake properly exits before normal builds occur
# when `--no-build` is passed on the command line.

./clean.sh

NO_BUILD_CODE=3
LAKE=${LAKE:-../../.lake/build/bin/lake}

# Test `--no-build` for setup-file and module builds (`buildUnlessUpToDate`)
$LAKE setup-file ./Irrelevant.lean Test --no-build && exit 1 || [ $? = $NO_BUILD_CODE ]
test ! -f .lake/build/lib/lean/Test.olean
$LAKE build Test
test -f .lake/build/lib/lean/Test.olean
$LAKE setup-file ./Irrelevant.lean Test --no-build

# Test `--no-build` for file builds (`buildFileUnlessUpToDate`)
$LAKE build +Test:c.o.export --no-build && exit 1 || [ $? = $NO_BUILD_CODE ]
test ! -f .lake/build/ir/Test.c.o.export
$LAKE build +Test:c.o.export
test -f .lake/build/ir/Test.c.o.export
$LAKE build +Test:c.o.export --no-build
