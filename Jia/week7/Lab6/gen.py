from cyaron import *
from random import *

_n = ati([0, 5,5,10, 50, 100,100,2E3,2E3,2E3,2499])
_m = ati([0, 5,5, 10, 10, 10,15,15,20,24,24])

for i in range(1, 11):
        test_data = IO(file_prefix="d", data_id=i)
        n_range = _n[i]
        m_range = _m[i]

        n = randint(1, n_range)
        for i in range(1, n):
                m = randint(1, m_range)
                strData = String.random(m, charset="WL")     
                test_data.input_writeln(strData)
        
        test_data.input_writeln('WWLWLE')
        test_data.output_gen("./code")
