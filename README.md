# Array Operations Program

Bu program, bir dizide çeşitli işlemler yapmanıza olanak tanır. Kullanıcı, diziyi görüntüleme, toplama, çarpma, ortalama alma, sıralama, ters çevirme, değiştirme, sıfırlama, silme, ekleme ve arama gibi işlemleri gerçekleştirebilir.

## İçindekiler

- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Fonksiyonlar](#fonksiyonlar)
- [Örnek Kullanım](#örnek-kullanım)

## Kurulum

1. Bu projeyi klonlayın:
    ```sh
    git clone https://github.com/yoskasss/cArray.git
    cd cArray
    ```

2. Gerekli araçları yükleyin (MinGW gibi):
    - [MinGW](http://www.mingw.org/)

3. Visual Studio Code'da gerekli uzantıları yükleyin:
    - C/C++ (Microsoft)

## Kullanım

1. Visual Studio Code'da projeyi açın.
2. [`../../../../../../c:/Users/monster/Desktop/C Dili/array/.vscode/tasks.json`](../../../../../../c:/Users/monster/Desktop/C Dili/array/.vscode/tasks.json ) dosyasını kullanarak projeyi derleyin:
    - `Terminal` > `Run Build Task` > `C/C++: gcc.exe etkin dosyayı derle`
3. [`../../../../../../c:/Users/monster/Desktop/C Dili/array/.vscode/launch.json`](../../../../../../c:/Users/monster/Desktop/C Dili/array/.vscode/launch.json ) dosyasını kullanarak projeyi hata ayıklayıcı ile çalıştırın:
    - `Run` > `Start Debugging`

## Fonksiyonlar

- `int dShow(int dizi[], int d)`: Dizinin elemanlarını gösterir.
- `int dSum(int dizi[], int d)`: Dizinin elemanlarının toplamını döndürür.
- `int dMul(int dizi[], int d)`: Dizinin elemanlarının çarpımını döndürür.
- `int dAvg(int dizi[], int d)`: Dizinin elemanlarının ortalamasını döndürür.
- `int dSort(int dizi[], int d)`: Dizinin elemanlarını artan sırayla sıralar.
- `int dReverse(int dizi[], int d)`: Dizinin elemanlarını ters çevirir.
- `int dChange(int dizi[], int d)`: Belirtilen indeksteki elemanı değiştirir.
- `int dZero(int dizi[], int d)`: Dizinin tüm elemanlarını sıfırlar.
- `int dDelete(int dizi[], int d)`: Belirtilen indeksteki elemanı siler.
- `int dAdd(int dizi[], int d)`: Dizinin sonuna yeni bir eleman ekler.
- `int dSearch(int dizi[], int d)`: Dizide belirtilen elemanı arar ve indeksini döndürür.

## Örnek Kullanım

Program çalıştırıldığında, kullanıcıdan dizinin boyutunu ve elemanlarını girmesi istenir. Daha sonra kullanıcı, aşağıdaki işlemlerden birini seçebilir:
```bash
1. Dizinin Elemanlarını Göster
2. Dizinin Elemanlarını Topla
3. Dizinin Elemanlarını Çarp
4. Dizinin Elemanlarını Ortalama
5. Dizinin Elemanlarını Sırala
6. Dizinin Elemanlarını Ters Çevir
7. Dizinin Elemanlarını Değiştir
8. Dizinin Elemanlarını Sıfırla
9. Dizinin Elemanlarını Sil
10. Dizinin Elemanlarını Ekle
11. Dizinin Elemanlarını Arama
```

#### **Örnek bir kullanım senaryosu:**

```bash
Dizin Editörü Dizin Kaç elemanlı olacak

5

elemanı giriniz
10

elemanı giriniz
20

elemanı giriniz
30

elemanı giriniz
40

elemanı giriniz
50 Dizi : 10 20 30 40 50
```
####         İşlemler

Dizinin Elemanlarını Göster

Dizinin Elemanlarını Topla

Dizinin Elemanlarını Çarp

Dizinin Elemanlarını Ortalama

Dizinin Elemanlarını Sırala

Dizinin Elemanlarını Ters Çevir

Dizinin Elemanlarını Değiştir

Dizinin Elemanlarını Sıfırla

Dizinin Elemanlarını Sil

Dizinin Elemanlarını Ekle

Dizinin Elemanlarını Arama Seçiminizi yapınız



