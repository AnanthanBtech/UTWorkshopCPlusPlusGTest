#include <gtest/gtest.h>

#include <LeapYear.h>

TEST(LeapYearTests, CurrentYear_IsLeapYearORNot) {
LeapYearCalendar leapYearCalendar;
ASSERT_FALSE(leapYearCalendar.isLeap(2019));
}
