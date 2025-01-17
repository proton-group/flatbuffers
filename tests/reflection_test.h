#ifndef TESTS_REFLECTION_TEST_H
#define TESTS_REFLECTION_TEST_H

#include <cstdint>
#include <string>
using namespace std;

namespace flatbuffers {
namespace tests {

void ReflectionTest(const std::string& tests_data_path, uint8_t *flatbuf, size_t length);
void MiniReflectFixedLengthArrayTest();
void MiniReflectFlatBuffersTest(uint8_t *flatbuf);

}  // namespace tests
}  // namespace flatbuffers

#endif
