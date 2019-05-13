from cyaron import *
from random import *

_n = ati([0, 10,10,10, 10, 20,20,40,30,49,49])
#_m = ati([0, 10,50,100, 500, 1E3,1E3,1E4,1E5,1E6,1E6])

for i in range(1, 11):
        test_data = IO(file_prefix="d", data_id=i)
        n_range = _n[i]
        n = randint(1, n_range)
        strData = String.random([10,49], charset="abcdefghijklmnopqrst")                
        test_data.input_writeln(n)
        test_data.input_writeln(strData)

        test_data.output_gen("./code")
