idf_component_register(
    SRCS pcf8574.c
    INCLUDE_DIRS .
    REQUIRES i2cdev log esp_idf_lib_helpers
)

target_compile_definitions(${COMPONENT_LIB} PUBLIC "-DLOG_LOCAL_LEVEL=ESP_LOG_VERBOSE")