# c++_numeric-limits-2

![image](numeric-limits-2.png)

- ## numeric-limits-2.cpp
  - ### v0.0.1 - 2020-02-06 - nelbren@nelbren.com

  - ### Example
 
    - #### Build:
    
        ```bash
        [nelbren@ndev-vps-01:~/numeric-limits-2]$ make
        g++ numeric-limits-2.cpp -o numeric-limits-2
        ```    
    
    - #### Run:
    
        ```bash
        [nelbren@ndev-vps-01:~/numeric-limits-2]$ ./numeric-limits-2
                          TYPE NAMES, MODIFIERS AND NUMERIC LIMITS FOR C++ TYPES OF VARIABLES
        =======================================================================================================
                      TYPE INTEGER? SIGNED? DIG10 MAXDIG10                  MIN                  MAX BYTES BITS
        -------------------------------------------------------------------------------------------------------
                      bool     true   false     0        0                    0                    1     1    8
                      char     true    true     2        0                 -128                  127     1    8
             unsigned char     true   false     2        0                    0                  255     1    8
                   wchar_t     true    true     9        0          -2147483648           2147483647     4   32
                    int8_t     true    true     2        0                 -128                  127     1    8
                   uint8_t     true   false     2        0                    0                  255     1    8
                   int16_t     true    true     4        0               -32768                32767     2   16
                  uint16_t     true   false     4        0                    0                65535     2   16
                   int32_t     true    true     9        0          -2147483648           2147483647     4   32
                  uint32_t     true   false     9        0                    0           4294967295     4   32
                   int64_t     true    true    18        0 -9223372036854775808  9223372036854775807     8   64
                  uint64_t     true   false    19        0                    0 18446744073709551615     8   64
                     short     true    true     4        0               -32768                32767     2   16
            unsigned short     true   false     4        0                    0                65535     2   16
                       int     true    true     9        0          -2147483648           2147483647     4   32
              unsigned int     true   false     9        0                    0           4294967295     4   32
                      long     true    true    18        0 -9223372036854775808  9223372036854775807     8   64
             unsigned long     true   false    19        0                    0 18446744073709551615     8   64
                 long long     true    true    18        0 -9223372036854775808  9223372036854775807     8   64
        unsigned long long     true   false    19        0                    0 18446744073709551615     8   64
                     float    false    true     6        9          1.17549e-38          3.40282e+38     4   32
                                      EPSILON: 1.19209e-07  MIN EXPONENT:   -37  MAX EXPONENT:    38
                    double    false    true    15       17         2.22507e-308         1.79769e+308     8   64
                                      EPSILON: 2.22045e-16  MIN EXPONENT:  -307  MAX EXPONENT:   308
               long double    false    true    18       21         3.3621e-4932        1.18973e+4932    16  128
                                      EPSILON:  1.0842e-19  MIN EXPONENT: -4931  MAX EXPONENT:  4932
        =======================================================================================================
                                   2020-02-06 - http://nelbren.com - basado en https://rextester.com/BBXAM15894  
        ```

  
- ### Based on numeric-limits.cpp 

    ```
    /*************************************************************************
     * File:   numeric-limits.cpp 
     * Brief:  Shows the numeric limits for all possible numerical types.
     * Author: Caio Rodrigues
     *************************************************************************/
    ```
  - ### [Shows C++ numeric limits for all possible numerical types](https://rextester.com/BBXAM15894)
