#include "gtest/gtest.h"
#include "../src/Item.h"

TEST(ItemTest, CompleteConstructorTest) {
    Item i("TestItem", "TestCategory", 2, "TestNotes");
    ASSERT_EQ(i.getName(), "TestItem");
    ASSERT_EQ(i.getCategory(), "TestCategory");
    ASSERT_EQ(i.getQuantity(), 2);
    ASSERT_EQ(i.getNotes(), "TestNotes");
    ASSERT_FALSE(i.isBought());
}

TEST(ItemTest, NameConstructorTest) {
    Item i("TestItem");
    ASSERT_EQ(i.getName(), "TestItem");
    ASSERT_EQ(i.getCategory(), "");
    ASSERT_EQ(i.getQuantity(), 1);
    ASSERT_EQ(i.getNotes(), "");
    ASSERT_FALSE(i.isBought());
}

TEST(ItemTest, NameCategoryConstructorTest) {
    Item i("TestItem", "TestCategory");
    ASSERT_EQ(i.getName(), "TestItem");
    ASSERT_EQ(i.getCategory(), "TestCategory");
    ASSERT_EQ(i.getQuantity(), 1);
    ASSERT_EQ(i.getNotes(), "");
    ASSERT_FALSE(i.isBought());
}

TEST(ItemTest, NameCategoryQuantityConstructorTest) {
    Item i("TestItem", "TestCategory", 2);
    ASSERT_EQ(i.getName(), "TestItem");
    ASSERT_EQ(i.getCategory(), "TestCategory");
    ASSERT_EQ(i.getQuantity(), 2);
    ASSERT_EQ(i.getNotes(), "");
    ASSERT_FALSE(i.isBought());
}

