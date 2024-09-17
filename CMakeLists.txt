cmake_minimum_required(VERSION 3.10)

project(NNComputer C)

include_directories(include)

# Main executable
add_executable(NNComputer src/main.c src/NN_gates.c src/full_adder.c)
target_link_libraries(NNComputer m)

# Testing logic gates
add_executable(NN_and_test tests/NN_and_test.c src/NN_gates.c)
target_link_libraries(NN_and_test m)

add_executable(NN_or_test tests/NN_or_test.c src/NN_gates.c)
target_link_libraries(NN_or_test m)

add_executable(NN_xor_test tests/NN_xor_test.c src/NN_gates.c)
target_link_libraries(NN_xor_test m)

add_executable(NN_nand_test tests/NN_nand_test.c src/NN_gates.c)
target_link_libraries(NN_nand_test m)

add_executable(NN_nor_test tests/NN_nor_test.c src/NN_gates.c)
target_link_libraries(NN_nor_test m)

add_executable(NN_xnor_test tests/NN_xnor_test.c src/NN_gates.c)
target_link_libraries(NN_xnor_test m)

add_executable(NN_not_test tests/NN_not_test.c src/NN_gates.c)
target_link_libraries(NN_not_test m)

# Testing full adder
add_executable(full_adder_1_test tests/full_adder_1_test.c src/full_adder.c src/NN_gates.c)
target_link_libraries(full_adder_1_test m)

add_executable(full_adder_8_test tests/full_adder_8_test.c src/full_adder.c src/NN_gates.c)
target_link_libraries(full_adder_8_test m)

add_executable(full_adder_16_test tests/full_adder_16_test.c src/full_adder.c src/NN_gates.c)
target_link_libraries(full_adder_16_test m)

add_executable(full_adder_32_test tests/full_adder_32_test.c src/full_adder.c src/NN_gates.c)
target_link_libraries(full_adder_32_test m)

add_executable(full_adder_64_test tests/full_adder_64_test.c src/full_adder.c src/NN_gates.c)
target_link_libraries(full_adder_64_test m)

enable_testing()

add_test(NAME NN_and_test COMMAND $<TARGET_FILE:NN_and_test>)
add_test(NAME NN_or_test COMMAND $<TARGET_FILE:NN_or_test>)
add_test(NAME NN_xor_test COMMAND $<TARGET_FILE:NN_xor_test>)
add_test(NAME NN_nand_test COMMAND $<TARGET_FILE:NN_nand_test>)
add_test(NAME NN_nor_test COMMAND $<TARGET_FILE:NN_nor_test>)
add_test(NAME NN_xnor_test COMMAND $<TARGET_FILE:NN_xnor_test>)
add_test(NAME NN_not_test COMMAND $<TARGET_FILE:NN_not_test>)
add_test(NAME full_adder_1_test COMMAND $<TARGET_FILE:full_adder_1_test>)
add_test(NAME full_adder_8_test COMMAND $<TARGET_FILE:full_adder_8_test>)
add_test(NAME full_adder_16_test COMMAND $<TARGET_FILE:full_adder_16_test>)
add_test(NAME full_adder_32_test COMMAND $<TARGET_FILE:full_adder_32_test>)
add_test(NAME full_adder_64_test COMMAND $<TARGET_FILE:full_adder_64_test>)
