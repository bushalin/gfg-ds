#include <gtest/gtest.h>
#include "example.h"
#include "class_example.h"

TEST(SampleAppTest, NameTest) {
    ASSERT_EQ("Hasib", GetAuthor());
}

TEST(SampleAppTest, NameNotNull) {
    ASSERT_NE("", GetAuthor());
}

TEST(ClassExampleTest, ConstructorCheck) {
    ClassExampleUser user;
    ASSERT_EQ("Hasib", user.GetUser().name);
    ASSERT_EQ(29, user.GetUser().age);
    ASSERT_EQ("062-0006", user.GetUser().post_code);
    ASSERT_EQ("Sapporo", user.GetUser().address);
}
