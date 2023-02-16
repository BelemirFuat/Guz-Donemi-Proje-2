# Guz-Donemi-Proje-2
Atatürk Üniversitesi 2022-2023 Yazılım Mühendisliği 1.Sınıf Güz Dönemi 2.Proje

Dersin Adı
: Algoritma ve Programlamaya Giriş
Verilme Tarihi
: 01.12.2022 Perşembe
Kod Teslim Tarihi
: 15.12.2022 Cuma, Saat 23:59
Proje - 2
: Kapalı Sayılar ve Seriler
Rapor Teslim Tarihi
: 15.12.2022 Cuma, Saat 23:59
Kod Kontrol Tarihi
: (Teslim Tarihinden Sonra İlan Edilecektir.)
Kapalı sayı kavramı ilk defa 2004 yılında Dj.A.Babayev tarafından tanımlamıştır. Bu kavram 1946 yılında Hintli matematikçi D.R. Kaprekar tarafından bulunan Kaprekar sabitinin (6174) farklı basamak sayıları ve farklı tabanlar için genelleştirilmesidir. N, dört basamaklı, tüm rakamları aynı olmayan bir tamsayı olsun. N tamsayısının rakamları artan ve azalan şekilde yeniden sıralandığında, küçük sayıya S, büyük sayıya L denir. Büyük sayıdan küçük sayı çıkarılır ve sonuca R (R=L-S) denir. Çıkan sonuç için aynı sıralama ve çıkarma işlemi devam ettirildiğinde, kendini tekrar eden sabit bir sayıya (6174) ulaşılır.
Verilen N tamsayısı için sıralama ve çıkarma işlemleri sonucunda iki durum ortaya çıkar. Birinci durumda, N tamsayısı sıralama ve çıkarma işlemleri sonunda kendini tekrar eden bir dizi (seri) ile sonlanır. İkinci durumda, N tamsayısı sıralama ve çıkarma işlemleri sonunda yukarıda da belirtildiği gibi sabit bir sayı (kapalı sayı), yani uzunluğu 1 olan seri, ile sonlanır.
Eğer verilen N tamsayısında sıfırlar var ise, S sayısının başında bu sıfırlar korunur. Örneğin; N=21003 için, L=32100 ve S=00123’tür. Ayrıca sıralama ve çıkarma işlemleri sırasında, verilen N tamsayısından daha az basamak sayısına sahip sayılarla karşılaşılabilir. Yani, kalan R sayısı, N tamsayısından daha az basamak sayısına sahip ise L sayısının sonuna ve S sayısının başına gerektiği kadar 0 eklenir. Örneğin; N=2122 için L=2221, S=1222 ve R=999 olur. Bu durumda bir sonraki işlem için L=9990, S=0999 şeklinde olacaktır. Böylece, sıralama ve çıkarma işlemleri sırasında tüm sayıların aynı sayıda basamağa sahip olması sağlanır.
Buna göre; kullanıcıdan tüm rakamları aynı olmayan (rakamlarından en az birisi diğerlerinden farklı), en az 2 en çok 9 basamaklı bir tamsayı (N) alan ve bu sayıya yukarıda bahsedilen şekilde sıralama ve çıkarma işlemlerinin uygulanması sonucunda;
• Kapalı bir sayıya ulaşılıyorsa, bu sayıya kaç adımda ulaşıldığını ve ulaşılan kapalı sayıyı
• Bir seriye ulaşılıyorsa, bu seriye kaç adımda ulaşıldığını, ulaşılan serinin uzunluğunu ve bu seriyi oluşturan sayıları sırayla yazdıran bir program yazınız.
ÖRNEKLER:
Seri örneği:
N=70605 için;
1. Adım: N=70605; L=76500, S=00567, R=75933
2. Adım: N=75933; L=97533, S=33579, R=63594
3. Adım: N=63594; L=96543, S=34569, R=61974
4. Adım: N=61974; L=97641, S=14679, R=82962
5. Adım: N=82962; L=98622, S=22689, R=75933
5 adımda bir seriye ulaşılmıştır, serinin uzunluğu 4’tür ve seriyi oluşturan sayılar sırayla:
75933
63594
61974
82962
Kapalı sayı örneği:
N=578 için;
1. Adım: N=578; L=875, S=578, R=297
2. Adım: N=297; L=972, S=279, R=693
3. Adım: N=693; L=963, S=369, R=594
4. Adım: N=594; L=954, S=459, R=495
5. Adım: N=495; L=954, S=459, R=495
5 adımda kapalı bir sayıya ulaşılmıştır ve bu kapalı sayı:495
Notlar:
1. Veri girişi sırasında, kullanıcının belirtilen kısıtlara uygun olarak giriş yapması sağlanmalıdır.
2. Sayılar için, long int veri tipini kullanabilirsiniz.
3. Bir kapalı sayıya ya da seriye en çok 100 adımda ulaşılacağını varsayabilirsiniz.
4. Bu ödevin temel amacı, tek boyutlu dizi (vektör) veri yapısının kullanımını ve vektörler üzerinde sıralama ve arama algoritmalarının kullanımını pekiştirmektir. Ayrıca hem problemin mantıksal parçalara bölünmesi amacıyla hem de uygun kod parçalarının tekrar kullanılması amacıyla, gerekli fonksiyonların oluşturulması ve kullanılması beklenmektedir.
Raporda bulunması gerekenler:
• Kapak (dersin adı, proje numarası ve adı, öğrenci numarası ve ad-soyadı, teslim tarihi)
• Analiz (problemi kendi cümlelerinizle tanımlayıp açıklayınız)
• Tasarım (problemin çözümüne yönelik geliştirdiğiniz program ve her altprogram için; altprogramın prototipini yazıp ne yaptığını açıklayınız, programda/altprogramda kullanılan veri yapılarını (dizileri) yazıp kullanım amaçlarını açıklayınız, programın/altprogramın algoritmasını yazınız)
• Programcı Kataloğu (analiz, tasarım, gerçekleştirim, test ve raporlama için harcadığınız süreleri yazınız, kaynak kodun çıktısını ekleyiniz)
• Kullanıcı Kataloğu (programın kullanım kılavuzunu ekran görüntüleri de kullanarak hazırlayınız, varsa programdaki kısıtlamaları belirtiniz)
DİKKAT EDİLMESİ GEREKEN NOKTALAR:
Projenin Teslim Edilmesi:
1. Proje, iki kişilik gruplar halinde yapılacaktır.
2. Kaynak kod dosyası (.c uzantılı), adı öğrencilerin numarasından (örneğin 210710001_220710001.c) oluşacak şekilde, gruptaki bir öğrenci tarafından OBS üzerinden ilgili ders sayfası kullanılarak proje yükleme klasörü yardımıyla sisteme yüklenmelidir.
3. Rapor, kodla birlikte rar veya zip dosyası yapılarak OBS üzerinden proje yükleme klasörüne birlikte yüklenmelidir.
4. Kod kontrolü sırasında, öğrenciler hazır bulunmalıdır.
Projenin Değerlendirilmesi:
1. Projenin değerlendirmesinde; programın doğru ve eksiksiz çalışmasının yanında etkinlik, yapısal ve modüler programlama ilkelerine uygunluk da dikkate alınacaktır.
Global değişken kullanılmaması ve fonksiyon kullanımı özellikle önemlidir. Buna göre puanlama şu şekildedir:
– Girintili yazım stili, anlamlı değişken isimleri kullanma, açıklamalar: 5 puan
– Etkinlik (gereksiz işlemlerden kaçınma): 5 puan
– Fonksiyon kullanımı: 10 puan
– Doğru çalışma: 50 puan
– Rapor: 20 puan
– Kod kontrolü sırasındaki kişisel performans: 10 puan
2. Kopya çekildiği tespit edildiğinde, çeken ve çektiren kişiler projeden sıfır alacaktır.
