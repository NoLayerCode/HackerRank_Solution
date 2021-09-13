#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
stringVal = input()
for x in stringVal[:].split():
	stringVal = stringVal.replace(x, x.capitalize())
print(stringVal)