/**
 * @file main.c
 * @brief A program to perform various operations on an array.
 * 
 * This program allows the user to perform multiple operations on an array such as displaying, summing, multiplying, 
 * averaging, sorting, reversing, changing, zeroing, deleting, adding, and searching elements.
 * 
 * The program provides a menu-driven interface for the user to select the desired operation.
 * 
 * Functions:
 * - int dShow(int dizi[], int d): Displays the elements of the array.
 * - int dSum(int dizi[], int d): Returns the sum of the elements of the array.
 * - int dMul(int dizi[], int d): Returns the product of the elements of the array.
 * - int dAvg(int dizi[], int d): Returns the average of the elements of the array.
 * - int dSort(int dizi[], int d): Sorts the elements of the array in ascending order.
 * - int dReverse(int dizi[], int d): Reverses the elements of the array.
 * - int dChange(int dizi[], int d): Changes an element of the array at a specified index.
 * - int dZero(int dizi[], int d): Sets all elements of the array to zero.
 * - int dDelete(int dizi[], int d): Deletes an element of the array at a specified index.
 * - int dAdd(int dizi[], int d): Adds a new element to the end of the array.
 * - int dSearch(int dizi[], int d): Searches for an element in the array and prints its index if found.
 * 
 * The main function initializes the array and provides a menu for the user to select the desired operation.
 * 
 * @note The program assumes that the user inputs valid indices and elements.
 * 
 * @author 
 * @date 
 */
#include <stdio.h>


int dShow(int dizi[],int d){
    printf("Dizi : ");
    for (int i = 0; i < d; i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");
    return 0;
}

int dSum(int dizi[],int d){
    int sum = 0;
    for (int i = 0; i < d; i++){
        sum += dizi[i];
    }
    return sum;
}

int dMul(int dizi[],int d){
    int mul = 1;
    for (int i = 0; i < d; i++){
        mul *= dizi[i];
    }
    return mul;
}

int dAvg(int dizi[],int d){
    int sum = 0;
    for (int i = 0; i < d; i++){
        sum += dizi[i];
    }
    return sum/d;
}

int dSort(int dizi[],int d){
    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            if (dizi[i] < dizi[j]){
                int temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    return 0;
}

int dReverse(int dizi[],int d){
    for (int i = 0; i < d/2; i++){
        int temp = dizi[i];
        dizi[i] = dizi[d-i-1];
        dizi[d-i-1] = temp;
    }
    return 0;
}

int dChange(int dizi[],int d){
    int index;
    printf("Değiştirmek istediğiniz elemanın indexini giriniz\n> ");
    scanf("%d",&index);
    printf("Değiştirmek istediğiniz elemanı giriniz\n> ");
    int eleman;
    scanf("%d",&eleman);
    dizi[index] = eleman;
    return 0;

}

int dZero(int dizi[],int d){
    for (int i = 0; i < d; i++){
        dizi[i] = 0;
    }
    return 0;
}

int dDelete(int dizi[],int d){
    int index;
    printf("Silmek istediğiniz elemanın indexini giriniz\n> ");
    scanf("%d",&index);
    for (int i = index; i < d; i++){
        dizi[i] = dizi[i+1];
    }
    return 0;
}

int dAdd(int dizi[],int d){
    int eleman;
    printf("Eklemek istediğiniz elemanı giriniz\n> ");
    scanf("%d",&eleman);
    dizi[d] = eleman;
    return 0;
}

int dSearch(int dizi[],int d){
    int eleman;
    printf("Aramak istediğiniz elemanı giriniz\n> ");
    scanf("%d",&eleman);
    for (int i = 0; i < d; i++){
        if (dizi[i] == eleman){
            printf("Eleman %d. indexte bulunmaktadır\n",i);
            return 0;
        }
    }
    printf("Eleman bulunamadı\n");
    return 0;
}


int main()
{
    int g=3;
    printf("Dizin Editörü\n");
    printf("Dizin Kaç elemanlı olacak\n> ");
    int d;
    scanf("%d",&d);
    int dizin[d];
    for (int i = 0; i < d; i++){
        printf("%d. elemanı giriniz\n> ",i+1);
        scanf("%d",&dizin[i]);
    }
    while (g==3)
    {
        printf("Dizi : ");
        for (int i = 0; i < d; i++){
            printf("%d ",dizin[i]);
        }
        printf("\n");
        printf("        İşlemler\n");
        printf("1. Dizinin Elemanlarını Göster\n");
        printf("2. Dizinin Elemanlarını Topla\n");
        printf("3. Dizinin Elemanlarını Çarp\n");
        printf("4. Dizinin Elemanlarını Ortalama\n");
        printf("5. Dizinin Elemanlarını Sırala\n");
        printf("6. Dizinin Elemanlarını Ters Çevir\n");
        printf("7. Dizinin Elemanlarını Değiştir\n");
        printf("8. Dizinin Elemanlarını Sıfırla\n");
        printf("9. Dizinin Elemanlarını Sil\n");
        printf("10. Dizinin Elemanlarını Ekle\n");
        printf("11. Dizinin Elemanlarını Arama\n");

        
        int secim;
        printf("Seçiminizi yapınız\n> ");
        scanf("%d",&secim);
        switch (secim)
        {
        case 1:
            dShow(dizin,d);
           break;
        case 2:
            printf("Dizinin Elemanlarının Toplamı : %d\n",dSum(dizin,d));
            break;
        case 3:
            printf("Dizinin Elemanlarının Çarpımı : %d\n",dMul(dizin,d));
            break;
        case 4:
            printf("Dizinin Elemanlarının Ortalaması : %d\n",dAvg(dizin,d));

            break;
        case 5:
            dSort(dizin,d);
            break;
        case 6:
            dReverse(dizin,d);
            break;
        case 7:
            dChange(dizin,d);
            break;
        case 8: 
            dZero(dizin,d);
            break;
        case 9:
            dDelete(dizin,d);
            break;
        case 10:    
            dAdd(dizin,d);
            break;
        case 11:
            dSearch(dizin,d);
            break;
        default:
            printf("Hatalı Seçim\n");
            break;
        }
    }
    
    return 0;
}
