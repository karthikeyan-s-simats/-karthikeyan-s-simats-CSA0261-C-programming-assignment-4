from typing import Union
import math

# Define the union shape as a data class
from dataclasses import dataclass
@dataclass
class Shape:
    shape_type: str
    dimensions: Union[float, tuple]

    exit()

# Calculate and print the area based on the user's choice of shape
if shape_type.lower() == "circle":
    area = math.pi * radius**2
    print("The area of the circle is:", area)
else:
    area = length * width
    print("The area of the rectangle is:", area)

