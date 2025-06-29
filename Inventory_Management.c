#include <stdio.h>
#define MAX_PRODUCTS 50

struct Product {
    int productID;
    char productName[50];
    int stockQuantity;
    float unitPrice;
};

struct Product inventory[MAX_PRODUCTS];
int totalProducts = 0;

void displayInventory() {
    int i;
    printf("\n============================================================\n");
    printf("                     INVENTORY LIST                          \n");
    printf("============================================================\n");
    if (totalProducts == 0) {
        printf("\nNo products in inventory!\n");
    } else {
        printf("\n%-10s\t%-20s\t%-15s\t%-10s\n", "ID", "Name", "Stock Quantity", "Unit Price");
        printf("------------------------------------------------------------\n");
        for (i = 0; i < totalProducts; i++) {
            printf("%-10d\t%-20s\t%-15d\t%-10.2f\n", 
                    inventory[i].productID, inventory[i].productName, inventory[i].stockQuantity, inventory[i].unitPrice);
        }
        printf("============================================================\n");
    }
}

void addProduct() {
    printf("\n================= ADD NEW PRODUCT =================\n");
    if (totalProducts < MAX_PRODUCTS) {
        printf("\nEnter Product ID: ");
        scanf("%d", &inventory[totalProducts].productID);
        printf("Enter Product Name: ");
        scanf("%s", inventory[totalProducts].productName);
        printf("Enter Stock Quantity: ");
        scanf("%d", &inventory[totalProducts].stockQuantity);
        printf("Enter Unit Price: ");
        scanf("%f", &inventory[totalProducts].unitPrice);
        totalProducts++;
        printf("Product successfully added!\n");
        displayInventory();
    } else {
        printf("Inventory is full!\n");
    }
}

void removeProduct() {
    printf("\n================= REMOVE PRODUCT =================\n");
    int productID, i, j, found = 0;
    printf("\nEnter Product ID to remove: ");
    scanf("%d", &productID);
    
    for (i = 0; i < totalProducts; i++) {
        if (inventory[i].productID == productID) {
            found = 1;
            for (j = i; j < totalProducts - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            totalProducts--;
            printf("Product removed successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Product not found!\n");
    }
}

void findProduct() {
    printf("\n================= FIND PRODUCT =================\n");
    int productID, i;
    printf("\nEnter Product ID: ");
    scanf("%d", &productID);
    
    for (i = 0; i < totalProducts; i++) {
        if (inventory[i].productID == productID) {
            printf("\nProduct Details:\n");
            printf("ID: %d\nName: %s\nStock Quantity: %d\nUnit Price: %.2f\n", 
                    inventory[i].productID, inventory[i].productName, inventory[i].stockQuantity, inventory[i].unitPrice);
            return;
        }
    }
    printf("Product not found!\n");
}

void modifyProduct() {
    printf("\n================= MODIFY PRODUCT =================\n");
    int productID, i, choice;
    printf("\nEnter Product ID: ");
    scanf("%d", &productID);
    
    for (i = 0; i < totalProducts; i++) {
        if (inventory[i].productID == productID) {
            printf("1. Update Stock Quantity\n2. Update Unit Price\nChoose an option: ");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter new Stock Quantity: ");
                scanf("%d", &inventory[i].stockQuantity);
            } 
            else if (choice == 2) {
                printf("Enter new Unit Price: ");
                scanf("%f", &inventory[i].unitPrice);
            } 
            else {
                printf("Invalid selection!\n");
            }
            return;
        }
    }
    printf("Product not found!\n");
}

int main() {
    int choice;
    do {
        printf("\n================================================\n");
        printf("              INVENTORY MANAGEMENT              \n");
        printf("================================================\n");
        printf("1. Add Product\n");
        printf("2. Remove Product\n");
        printf("3. Find Product\n");
        printf("4. Modify Product\n");
        printf("5. View Inventory\n");
        printf("6. Exit\n");
        printf("================================================\n");
        printf("Enter your selection: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addProduct(); break;
            case 2: removeProduct(); break;
            case 3: findProduct(); break;
            case 4: modifyProduct(); break;
            case 5: displayInventory(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid selection, please try again.\n");
        }
    } while (choice != 6);
    
    return 0;
}

