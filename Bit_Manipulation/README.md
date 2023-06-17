| Index             | Question    |  Input  | Output        | Logic  |
| ----------------- | -----------|--------------------------|----------------|-----|
| 1 | Introduction |<img width=200/> 70 3 |<img width=150/> 1 70 66 | mask = 1<<(i-1)<br/> get = bool(num & mask) <br/> set = (num \| mask) <br/> clear = (~mask & num) |


