from cyaron import *
from random import *

_n = ati([0, 10,2000,2000, 2000, 2E4,2E4,2E4,2E4,2E4,2E4])
_m = ati([0, 1E4,1E4,1E4,1E4,1E4,1E4,1E4,1E4,1E4,1E4])

for i in range(1, 11):
        test_data = IO(file_prefix="d", data_id=i)
        n_range = _n[i]
        m_range = _m[i]
        n = randint(1, n_range)
        test_data.input_writeln(n)
        for j in range(1,n+1):
                m = randint(-m_range, m_range)
                test_data.input_write(m,)
        test_data.input_writeln()
        test_data.output_gen("./code")
