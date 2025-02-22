# 42Yerevan-PRINTF

## Ինչ է անում ստանդարտ printf ֆուկցիան՝

ա) կարդում է փոխանցված տողը և որոնում ձևաչափային բնութագրիչները (форматные спецификаторы)  
բ) փոխարինում է ձևաչափային բնութագրիչները փոխանցված արժեքներով  

## Պարզ բնութագրիչների տեսակները՝

**%s** - տող  
**%d** - տասնորդական թիվ  
**%i** - տասնորդական թիվ  
**%u** - առանց նշանի թիվ  
**%x** - տասնվեցական թիվ  
**%X** - տասնվեցական թիվ մեծատառ  
**%p** - ցուցիչ  
**%%** - տոկոսի սիմվոլը 

## printf -ը փոփոխական ֆունկցիա է (variatic function)

Սովորական ֆունկցիաները ընդունում են ֆիքսված քանակի փոփոխականներ, կամ չեն ընդունում ոչ մի փոփոխական, իսկ այն դեպքերում, երբ իսկզբանե ակնհայտ չէ, թե քանի փոփոխական կարող է մուտքագրվել ֆունկցիաի մեջ, կիրառում են (․․․) բազմակետերը։ 

**Կարևոր է**, նախքան բազմակետերը պետք է հայտարարված լինի առնվազն մեկ հատ ֆիքսված փոփոխական (սովորաբար այն իրենից ներկայացնում է փոխանցված արգումենտների քանակը), հակառակ դեպքում կազմարկիչը (կոմպիլատորը) չի կարող հասկանալ թե ինչից պետք է սկսի աշխատանքը։

## Վարկանիշային տվյալների շարադրվածություն՝ va_list, va_start, va_arg, va_end (variatic macroses)

Որպես փոփոխական ֆունկցիաների գործիքներ, C-ում օգտագործվում են հատուկ տարրեր՝ va_list, va_start, va_arg, va_end:

va_list — հատուկ տիպ, որը օգտագործվում է տարբեր չափսերով կամ տեսակներով տվյալներ պահելու համար:

va_start(va_list ap, last_fixed_argument) — այս ֆունկցիան սկսում է հասանելի դարձնել ֆունկցիային փոխանցված բազմակի փոփոխականներիը va_list-ում։ Այն պետք է կանչվի ֆունկցիայի տրամաբանական մասի սկզբում։

va_arg(va_list ap, type) — այս ֆունկցիան օգնում է ստանալ հաջորդ արգումենտը va_list-ից և վերադարձնել այն նշված տիպով (type).

va_end(va_list ap) — այս ֆունկցիան պետք է կանչել ֆունկցիայի տրամաբանական վերջում, որպեսզի փակվի va_list-ի աշխատանքը։ Այն օգտագործվում է հիշողության ազատման համար։

## Վերջնական մեկնաբանություն

Այսպիսով, printf-ի աշխատանքը ներառում է ձևաչափային բնութագրիչների օգտագործումը և դրանց փոխարինումը փոխանցված արժեքներով։ Միևնույն ժամանակ, փոփոխական ֆունկցիաների օգտագործումը հնարավորություն է տալիս տողում փոփոխական քանակությամբ տվյալներ փոխանցել, ինչը մեծացնում է ֆունկցիայի ճկունությունն ու հնարավորությունները: