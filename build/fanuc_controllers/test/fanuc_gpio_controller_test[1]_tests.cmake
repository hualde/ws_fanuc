add_test([=[GPIOControllerTest.ROS2ControlLifecycle]=]  /home/hualde/misCosas/ws_fanuc/build/fanuc_controllers/test/fanuc_gpio_controller_test [==[--gtest_filter=GPIOControllerTest.DISABLED_ROS2ControlLifecycle]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[GPIOControllerTest.ROS2ControlLifecycle]=]  PROPERTIES DISABLED TRUE)
set_tests_properties([=[GPIOControllerTest.ROS2ControlLifecycle]=]  PROPERTIES WORKING_DIRECTORY /home/hualde/misCosas/ws_fanuc/build/fanuc_controllers/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  fanuc_gpio_controller_test_TESTS GPIOControllerTest.ROS2ControlLifecycle)
