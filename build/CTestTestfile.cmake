# CMake generated Testfile for 
# Source directory: C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI
# Build directory: C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(TaskManagerTest "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/build/Debug/runTests.exe")
  set_tests_properties(TaskManagerTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;48;add_test;C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(TaskManagerTest "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/build/Release/runTests.exe")
  set_tests_properties(TaskManagerTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;48;add_test;C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(TaskManagerTest "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/build/MinSizeRel/runTests.exe")
  set_tests_properties(TaskManagerTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;48;add_test;C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(TaskManagerTest "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/build/RelWithDebInfo/runTests.exe")
  set_tests_properties(TaskManagerTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;48;add_test;C:/Users/rbelt/Desktop/5th semester/prog2/Task_manager_AI/CMakeLists.txt;0;")
else()
  add_test(TaskManagerTest NOT_AVAILABLE)
endif()
subdirs("googletest")
