| Index             | Question    |  Input  | Output        | Logic  |
| ----------------- | -----------|--------------------------|----------------|-----|
| 1 | Introduction |<img width=200/> 70 3 |<img width=150/> 1 70 66 | mask = 1<<(i-1)<br/> get = bool(num & mask) <br/> set = (num \| mask) <br/> clear = (~mask & num) |
| 2 | Second Largest  | N = 6<br/>{12, 35, 1, 10, 34, 1} |34 | If element is greater than largest it may be second largest <br/> If element is smaller than largest but greater than second largest then update it <br/> O(n)
| 3 | Check if array is sorted | N = 5<br/>{10, 20, 30, 40, 50} | 1 | O(n)
| 4 | Remove duplicate elements from sorted Array | N = 3<br/>{1, 2, 2} | {1, 2} | Two Pointer |
| 5 | Quick Left Rotation | N = 7, K = 2<br/>{1, 2, 3, 4, 5, 6, 7} | 3 4 5 6 7 1 2 |  reverse(arr,arr+k)<br/> reverse(arr+k,arr+n)<br/>reverse(arr,arr+n)
| 6 | Move all zeroes to end of array | N = 5<br/>{3, 5, 0, 0, 4} | 3 5 4 0 0 | Two Pointer |
| 7 | Union of Two Sorted Arrays | n = 5, {1, 2, 3, 4, 5}  <br/>m = 3, {1, 2, 3} | 1 2 3 4 5 | Use arr.back() function to remove duplicates |
| 8 | Missing number | N = 4 <br/>{1, 4, 3} | 2 | (n*(n+1))/2 - sum |
| 9 | Maximize Number of 1's | N = 11<br/>{1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1}<br/>M = 2 | 8 | Count the number of zeros <br/> If it is greater than M , increment i pointer until number of zero became M |
| 10 | Find the element that appears once | N = 5<br/>{1, 1, 2, 5, 5} | 2 | XOR all elements |
| 11 | Longest Sub-Array with Sum K | {10, 5, 2, 7, 1, 9}<br/>K = 15 | 4 | Prefix sum<br/> map<prifixSum,index> <br/> find sum-K
| 12 | |
| 13 | |
| 14 | |
| 15 | |
| 16 | |
| 17 | |
| 18 | |
| 19 | |
| 20 | |
| 21 | |
| 22 | |

