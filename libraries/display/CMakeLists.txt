file(GLOB MY_LIB_SRCS "src/*.c")

idf_component_register(SRCS ${MY_LIB_SRCS}
                       INCLUDE_DIRS "includes"
                       REQUIRES pcf8574 hd44780)