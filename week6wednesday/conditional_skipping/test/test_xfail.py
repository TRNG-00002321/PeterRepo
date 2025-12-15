import sys

import pytest


@pytest.mark.xfail(reason="Known bug, fix in progress")
def test_known_bug():
    """This test exposes a known bug."""
    # When this starts passing, the xfail will alert us
    assert 1 + 1 == 3  # Bug: should be 2


@pytest.mark.xfail(
    strict=True,
    reason="This MUST fail, if it passes something is wrong"
)
def test_strict_xfail():
    """A test that should always fail."""
    assert False


@pytest.mark.xfail(
    sys.platform == "win32",
    reason="Flaky on Windows"
)
def test_sometimes_flaky():
    """Test that's flaky on certain platforms."""
    import random
    # Simulate flaky behavior
    assert random.choice([True, True, True, False])


@pytest.mark.xfail(raises=ZeroDivisionError)
def test_specific_exception():
    """Expected to raise specific exception."""
    1 / 0