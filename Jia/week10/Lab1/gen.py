from cyaron import *
from random import *

_n = ati([0, 10,50,100, 500, 1E3,1E3,1E4,1E5,1E6,1E6])
_m = ati([0, 10,50,100, 500, 1E3,1E3,1E4,1E5,1E6,1E6])

for i in range(1, 11):
        test_data = IO(file_prefix="d", data_id=i)
        m_range = _m[i]
        n_range = _n[i]
        m = randint(1, m_range)
        n = randint(1, n_range)
        if(m > n):
                temp = m
                m = n
                n = temp
        test_data.input_writeln(m, n)
        test_data.output_gen("./code")
