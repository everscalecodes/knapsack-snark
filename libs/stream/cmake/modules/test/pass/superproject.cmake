install_dir(${TEST_DIR}/superproject TARGETS check)
test_check_package(NAME simple HEADER simple.h TARGET lib::simple)
test_check_pkgconfig(NAME simple HEADER simple.h)
test_check_package(NAME basic HEADER simple.h TARGET lib::basic)
test_check_pkgconfig(NAME basic HEADER simple.h)