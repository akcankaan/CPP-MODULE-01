# 📦 C++ Module 01

Bu depo, 42 okulu C++ müfredatının bir parçası olan **Module 01** egzersizlerini içerir. Bu modül, temel C++ konularına giriş yaparak dinamik bellek yönetimi, pointer'lar ve referanslar gibi konuları öğretmeyi amaçlar.

---

## 🎯 Amaç

Bu modülde aşağıdaki C++ konularını öğrenip uygulayacaksınız:

- Dinamik bellek yönetimi (`new`, `delete`)
- Üyeye (member) pointer kullanımı
- Referanslar
- `switch` yapısı
- Basit sınıf yapıları ve ilişkileri

---

## 📁 İçerik

### Egzersizler

| Egzersiz | Açıklama |
|----------|----------|
| **ex00** | `Zombie` sınıfı oluşturulur. Stack ve heap farkı incelenir. |
| **ex01** | `zombieHorde` fonksiyonu ile çoklu nesne oluşturulur. |
| **ex02** | Pointer ve referansların farkı adres ve değer üzerinden gösterilir. |
| **ex03** | `Weapon`, `HumanA`, `HumanB` sınıfları ile ilişki yapıları çalışılır. |
| **ex04** | Dosya içeriğinde string değiştirme işlemi yapılır (`.replace`). |
| **ex05** | `Harl` sınıfında log seviyelerine göre pointer-to-member fonksiyonlar kullanılır. |
| **ex06** | `switch` deyimi ile `Harl` sınıfı filtrelenir. (Opsiyonel egzersizdir) |

---

## ⚙️ Derleme

Her klasörün içinde bir `Makefile` yer almaktadır. Aşağıdaki şekilde derleyip çalıştırabilirsiniz:

```bash
cd ex00
make
./<çalıştırılabilir_dosya_adı>
```

## 🚫 Kurallar ve Yasaklar
- C fonksiyonları (printf, malloc, free...) yasaktır.
- std::string::replace fonksiyonu ex04 için yasaktır.
- using namespace std, friend gibi ifadeler yasaktır.
- STL kullanımı yalnızca Modül 08 ve sonrasında serbesttir.
- Her çıktı newline karakteriyle bitmelidir.
- Header dosyalarında include guard kullanılmalıdır.

## ✅ Teslimat
- Proje, Git üzerinden değerlendirilir.
- Dosya isimleri ve klasör yapısı belirtilen şekilde olmalıdır.
- Kod okunabilir ve anlaşılır olmalıdır.

## 🧠 Notlar
- Kodunuzu yazmadan önce tüm modülü okuyun.
- Bellek sızıntısı kontrolü yapmayı unutmayın.
- Her başlık altında yer alan örnek çıktılar, beklenen davranışı açıkça gösterir.

## 🧑‍💻 Yazar
Mehmet Kaan Akcan 42 Kocaeli / [https://github.com/akcankaan]
