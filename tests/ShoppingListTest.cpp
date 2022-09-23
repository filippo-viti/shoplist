#include "gtest/gtest.h"
#include "../src/ShoppingList.h"

class ShoppingListTest : public ::testing::Test {

protected:
    void SetUp() override {
        l.setName("Test list");
        l.addCollaborator(new User("Test user"));
        Item item1("milk", "dairy");
        l.addItem(item1);
    }

    ShoppingList l;
};


TEST_F(ShoppingListTest, TotalBoughtTest) {
    ASSERT_EQ(l.getTotalBought(), 0);
    l.checkItem("milk");
    ASSERT_EQ(l.getTotalBought(), 1);
}

TEST_F(ShoppingListTest, AddItemTest) {
    Item item("bread", "bakery");
    l.addItem(item);
    ASSERT_EQ(l.getTotalItems(), 2);
    ASSERT_EQ(l.getItems().back().getName(), "bread");
}

TEST_F(ShoppingListTest, RemoveItemTest) {
    l.removeItem("milk");
    ASSERT_TRUE(l.getItems().empty());
    ASSERT_EQ(l.getTotalItems(), 0);
}

TEST_F(ShoppingListTest, CheckItemTest) {
    l.checkItem("milk");
    ASSERT_TRUE(l.getItem("milk")->isBought());
}

TEST_F(ShoppingListTest, UncheckItemTest) {
    l.checkItem("milk");
    l.uncheckItem("milk");
    ASSERT_FALSE(l.getItem("milk")->isBought());
}

TEST_F(ShoppingListTest, GetItemTest) {
    auto notFound = l.getItem("chocolate");
    ASSERT_EQ(notFound, l.getItems().end());
}

TEST_F(ShoppingListTest, TotalItemsTest) {
    ASSERT_EQ(l.getTotalItems(), 1);
}

TEST_F(ShoppingListTest, AddCollaboratorTest) {
    l.addCollaborator(new User("Aldo Baglio"));
    ASSERT_EQ(l.getCollaborators().size(), 2);
}