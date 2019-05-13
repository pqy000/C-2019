from cyaron import *
from random import *

_n = ati([0, 10,10,10, 100, 100,100,100,500,500,1000])
_m = ati([0, 10,10,10, 50, 70,80, 100,200,200,400])

for i in range(1, 11):
        test_data = IO(file_prefix="d", data_id=i)
        m_range = _m[i]
        n_range = _n[i]

        n = randint(1, n_range)
        test_data.input_writeln(n)

        for i in range(n):
                while(1):
                        a = randint(1, m_range)
                        b = randint(1, m_range)
                        if(a != b):
                                break
                if(a > b):
                        temp = a
                        a = b
                        b = temp
                test_data.input_writeln(a, b)
        test_data.output_gen("./code")
