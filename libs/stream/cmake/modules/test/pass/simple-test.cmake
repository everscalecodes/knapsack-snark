install_dir(${TEST_DIR}/simpletest TARGETS check)
test_check_package(NAME simple HEADER simple.h TARGET simple)
test_check_pkgconfig(NAME simple HEADER simple.h)
