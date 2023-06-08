extern "C" {
#include <c_exports.h>
}
#include <cpp_exports.h>
#include <cest>

describe("Example test", []() {
    beforeEach([]() {
    });

    afterEach([]() {
    });

    it("can be used to test C code", []() {
        expect(exampleFunction(10)).toEqual(20);
    });

    it("can be used to test C++ code", []() {
        auto c = ExampleClass();
        expect(c.exampleMethod(10)).toEqual(20);
    });
});
