from cyaron import *
from random import *


for i in range(5, 11):
        test_data = IO(file_prefix="d", data_id=i)
        str1 = String.random((3,3), charset="ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        str2 = String.random((3,3), charset="ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        test_data.input_writeln(str1)
        test_data.input_writeln(str2)
        test_data.output_gen('./code')

