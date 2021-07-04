import serial

ser = serial.Serial('COM3', 115200)

command = "ASD123"
command = command.ljust(80, '0')
command = str.encode(command)