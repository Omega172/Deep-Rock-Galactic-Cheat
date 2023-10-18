#pragma once

#define CHEAT_GEAR_CHECK_OFFSET(targetClass, varName, expectedOffset) \
	Assert::AreEqual(uint32_t(expectedOffset), uint32_t(offsetof(targetClass, varName)), L#targetClass" -> "#varName".")

#define CHEAT_GEAR_CHECK_SIZE(targetClass, expectedSize) \
	Assert::AreEqual(uint32_t(expectedSize), uint32_t(sizeof(targetClass)), L#targetClass" Has a wrong size.")