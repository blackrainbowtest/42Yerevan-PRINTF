# 42Yerevan-PRINTF

## Ինչ է անում ստանդարտ printf ֆուկցիան՝

ա) կարդում է փոխանցված տողը և որոնում ձևաչափային բնութագրիչները `(форматные спецификаторы)`  
բ) փոխարինում է ձևաչափային բնութագրիչները փոխանցված արժեքներով  

## Պարզ ֆորմատային բնութագրիչների տեսակները՝

| Բնութագրիչ | Նշանակություն             | Կոդի օրինակ | Արդյունք |
|-------------|---------------------------|------------|---------|
| `%c`        | Նիշ (char)               | `printf("%c", 'A');` | `A` |
| `%s`        | Տող (string)               | `printf("%s", "Hello");` | `Hello` |
| `%d`        | Տասնորդական թիվ (digit)    | `printf("%d", 42);` | `42` |
| `%i`        | Տասնորդական թիվ (digit)    | `printf("%i", -42);` | `-42` |
| `%u`        | Առանց նշանի թիվ (unsigned) | `printf("%u", 42);` | `42` |
| `%x`        | Տասնվեցական թիվ (hex) | `printf("%x", 255);` | `ff` |
| `%X`        | Տասնվեցական թիվ մեծատառ (HEX) | `printf("%X", 255);` | `FF` |
| `%p`        | Ցուցիչ (pointer)         | `printf("%p", (void*)ptr);` | `0x7ffee4b8a9c0` (example) |
| `%%`        | Տոկոսի սիմվոլ (symbol `%`) | `printf("%%");` | `%` |

## printf -ը փոփոխական ֆունկցիա է (variatic function)

Սովորական ֆունկցիաները ընդունում են ֆիքսված քանակի փոփոխականներ, կամ չեն ընդունում ոչ մի փոփոխական, իսկ այն դեպքերում, երբ իսկզբանե ակնհայտ չէ, թե քանի փոփոխական կարող է մուտքագրվել ֆունկցիաի մեջ, կիրառում են (․․․) բազմակետերը։ 

**Կարևոր է**, նախքան բազմակետերը պետք է հայտարարված լինի առնվազն մեկ հատ ֆիքսված փոփոխական (սովորաբար այն իրենից ներկայացնում է փոխանցված արգումենտների քանակը), հակառակ դեպքում կազմարկիչը (կոմպիլատորը) չի կարող հասկանալ թե ինչից պետք է սկսի աշխատանքը։

## Վարկանիշային տվյալների շարադրվածություն՝ va_list, va_start, va_arg, va_end (variatic macroses)

Որպես փոփոխական ֆունկցիաների գործիքներ, C-ում օգտագործվում են հատուկ տարրեր՝ `va_list`, `va_start`, `va_arg`, `va_end`:

`va_list` — հատուկ տիպ, որը օգտագործվում է տարբեր չափսերով կամ տեսակներով տվյալներ պահելու համար:

`va_start(va_list ap, last_fixed_argument)` — այս ֆունկցիան սկսում է հասանելի դարձնել ֆունկցիային փոխանցված բազմակի փոփոխականներիը va_list-ում։ Այն պետք է կանչվի ֆունկցիայի տրամաբանական մասի սկզբում։

`va_arg(va_list ap, type)` — այս ֆունկցիան օգնում է ստանալ հաջորդ արգումենտը va_list-ից և վերադարձնել այն նշված տիպով (type).

`va_end(va_list ap)` — այս ֆունկցիան պետք է կանչել ֆունկցիայի տրամաբանական վերջում, որպեսզի փակվի va_list-ի աշխատանքը։ Այն օգտագործվում է հիշողության ազատման համար։

## Վերջնական մեկնաբանություն

Այսպիսով, `printf`-ի աշխատանքը ներառում է ձևաչափային բնութագրիչների օգտագործումը և դրանց փոխարինումը փոխանցված արժեքներով։ Միևնույն ժամանակ, փոփոխական ֆունկցիաների օգտագործումը հնարավորություն է տալիս տողում փոփոխական քանակությամբ տվյալներ փոխանցել, ինչը մեծացնում է ֆունկցիայի ճկունությունն ու հնարավորությունները:

### Ինչ պետք է ուսումնասիրեմ՝

`C type promotion`, `Default promotion` - Թույլ կտա հասկանալ թե ինչու է `ft_write_char(va_arg(ap, int))` այս արտահայտությունում տառ տպելու համար փոխանցում ենք տվյալի տիպը ոչ թե <span style="color: skyblue;">**`char`**</span> այլ <span style="color: red;">**`int`**</span>:

## <span style="color: #10F4DC;">Երկուսի աստիճանները C-ում տվյալների տիպերի համար</span>

| Տվյալների տիպ           | Բիտերի քանակը | Մաքսիմալ արժեք                     | Բանաձև (2^N) |
|----------------------|--------------|----------------------------------------|--------------|
| `char`              | 8 բիտ        | 2⁸ = 256 (от 0 до 255 для `unsigned`) | 2⁸ |
| `signed char`       | 8 բիտ        | 2⁷ = 128 (от -128 до 127)             | 2⁷ |
| `unsigned char`     | 8 բիտ        | 2⁸ = 256 (от 0 до 255)                | 2⁸ |
| `short`            | 16 բիտ       | 2¹⁶ = 65536 (от -32,768 до 32,767)    | 2¹⁶ |
| `unsigned short`    | 16 բիտ       | 2¹⁶ = 65536 (от 0 до 65535)           | 2¹⁶ |
| `int`              | 32 բիտ      | 2³² = 4,294,967,296 (от -2,147,483,648 до 2,147,483,647) | 2³² |
| `unsigned int`     | 32 բիտ      | 2³² = 4,294,967,296 (от 0 до 4,294,967,295) | 2³² |
| `long`            | 32 կամ 64 բիտ | Համակարգից կախված              | 2³² կամ 2⁶⁴ |
| `unsigned long`    | 32 կամ 64 բիտ | Համակարգից կախված              | 2³² կամ 2⁶⁴ |
| `long long`        | 64 բիտ      | 2⁶⁴ = 18,446,744,073,709,551,616      | 2⁶⁴ |
| `unsigned long long` | 64 բիտ | 2⁶⁴ = 18,446,744,073,709,551,616      | 2⁶⁴ |

### Ինչու `char`-ը և `short`-ը վերածվում են `int`-ի `va_arg()`-ում

Դրա պատճառը ամբողջ թվերի առաջխաղացումն է `(integer promotion)`, որը սահմանված է C ստանդարտով։

🔹 `Պատմական պատճառ`:

Վաղ պրոցեսորները `int`-ն ավելի արդյունավետ էին մշակում, քան `char`-ը կամ `short`-ը, ուստի `C` ստանդարտը սահմանում էր, որ `int`-ից փոքր բոլոր տիպերը պետք է ավտոմատ կերպով ընդլայնվեն `int`-ի, երբ փոխանցվեն `...`:

🔹 Պաշտոնական կանոն.

Եթե ​​տեսակը կարող է ներկայացվել որպես `int`, այն ավտոմատ կերպով ընդլայնվում է մինչև `int`: Եթե ​`unsigned short` չի տեղավորվում `int`-ի մեջ, այն լայնացվում է մինչև `unsigned int`:

🔹 Ի՞նչ կլինի, եթե ես փոխանցեմ `char` կամ `short` `va_arg()`-ին այնպես, ինչպես կա:

`va_arg(ap, char)` կամ `va_arg(ap, short)` փոխանցումը կհանգեցնի չսահմանված վարքագծի, քանի որ `va_arg()`-ն ակնկալում է `int`, բայց փնտրում է `char` կամ `short`, որը արգումենտի կույտում `(argument stack)` չէ:

### Իսկ եթե փոխանցենք `long`, `long long` կամ `float`?

Եթե փոխանցենք `long`, `long long`, `float` եւ այլ տիպեր, ապա նրանք իրենց այլ կերպ են դրսեւվորում`

`long` և `long long` չեն փոփոխվում, քանի որ նրանք մեծ են `int`-ից և չեն համապատասխանում `integer promotion`-ին։
`float` վերածվում է `double`, քանի որ `...` `float` ավտոմատ կերպով ընդարձակվում է մինչև `double`.

### va_arg() վարքագիծը տարբեր տիպերի համար C-ում

| Սկզբնական տիպ    | Վերափոխում `...`-ի միջոցով      | Անհրաժեշտ է `va_arg()`-ում այլ տիպ նշել? |
|------------------|---------------------------|--------------------------------|
| `char`          | Վերափոխվում է `int`      | ✅ Անհրաժեշտ է օգտագործել `int` |
| `signed char`   | Վերափոխվում է `int`      | ✅ Անհրաժեշտ է օգտագործել `int` |
| `unsigned char` | Վերափոխվում է `int`      | ✅ Անհրաժեշտ է օգտագործել `int` |
| `short`         | Վերափոխվում է `int`      | ✅ Անհրաժեշտ է օգտագործել `int` |
| `unsigned short`| Վերափոխվում է `int` կամ `unsigned int` | ✅ Անհրաժեշտ է օգտագործել `int` կամ `unsigned int` |
| `int`           | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `int` |
| `unsigned int`  | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `unsigned int` |
| `long`          | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `long` |
| `unsigned long` | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `unsigned long` |
| `long long`     | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `long long` |
| `unsigned long long` | Չի փոփոխվում      | ❌ Կարելի է օգտագործել `unsigned long long` |
| `float`         | Վերափոխվում է `double`  | ✅ Անհրաժեշտ է օգտագործել `double` |
| `double`        | Չի փոփոխվում             | ❌ Կարելի է օգտագործել `double` |

## <span style="color: #10F4DC;">Ստորգետնյա քարեր</span>

### va_arg() վարքագիծը տարբեր տիպերի համար C-ում

Առաջին ստորգետնյա քարը որը հանդիպելու է, դա `%s` -ին փոխանցվող `NULL` -ն է, որը 

https://pythontutor.com/

for training and understund how code does work