#include "catch.h"

#include "file/file.h"

using namespace glt::file;

TEST_CASE("file", "[file]") {
	REQUIRE(SanitizeLuaFilePath("../../../hello.lua") == "hello.lua");
	REQUIRE(SanitizeLuaFilePath("../../../dir/../../dir/../../../test.lua") == "dir/dir/test.lua");
	REQUIRE(SanitizeLuaFilePath("cat") == "cat.lua");
	REQUIRE(SanitizeLuaFilePath("") == "noname.lua");
	REQUIRE(SanitizeLuaFilePath(".lua") == "noname.lua");
	REQUIRE(SanitizeLuaFilePath(".") == "noname.lua");
}
